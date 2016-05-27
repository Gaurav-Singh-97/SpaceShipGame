#ifndef GAME
#define GAME

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "myrect.h"
#include "score.h"

class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);
    void show();

    QGraphicsScene * scene;
    MyRect * player;
    Score * score;
};

#endif // GAME

