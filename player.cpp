#include "player.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "bullet.h"
#include "enemy.h"

Player::Player(QGraphicsItem *parent)
{
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/antitankriflefire.wav"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        if (pos().x() > 0)
            setPos(x()-10, y());
    }
    else
    if (event->key() == Qt::Key_Right)
    {
        if (pos().x() + 100 < 800)
            setPos(x()+10, y());
    }
        /*
    else
    if (event->key() == Qt::Key_Up)
        setPos(x(), y()-10);
    else
    if (event->key() == Qt::Key_Down)
        setPos(x(), y()+10);
        */
    else
    if (event->key() == Qt::Key_Space)
    {
        Bullet * bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);

        // play bulletsound
        if (bulletsound->state() == QMediaPlayer::PlayingState)
        {
            bulletsound->setPosition(0);
        }
        else if (bulletsound->state() == QMediaPlayer::StoppedState)
        {
            bulletsound->play();
        }
    }
}

void Player::spawn()
{
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
