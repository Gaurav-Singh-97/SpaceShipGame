#ifndef GAME
#define GAME

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "myrect.h"

class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);
    void show();

    QGraphicsScene * scene;
    MyRect * player;
};

#endif // GAME

