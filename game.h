#ifndef GAME
#define GAME

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include "score.h"

class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);
    void show();

    QGraphicsScene * scene;
    Player * player;
    Score * score;
};

#endif // GAME

