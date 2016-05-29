
#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include "game.h"

#include <stdlib.h>

extern Game * game;

Enemy::Enemy(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    // set random position
    int random_number = rand()%700;
    setPos(random_number, 0);

    //setRect(0, 0, 100, 100);
    setPixmap(QPixmap(":/images/Enemy.png"));
    setTransformOriginPoint(35, 30);
    //image is 70 X 61
    setRotation(180);

    // connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

            timer->start(50);
}

void Enemy::move()
{
    // move enemy down
    setPos(x(), y()+5);
    if (pos().y() > 600)
    {
        // decrease the health
        game->health->decrease();

        scene()->removeItem(this);
        delete this;
    }
}
