#ifndef ENEMY
#define ENEMY

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent = 0);
public slots:
    void move();
};

#endif // ENEMY

