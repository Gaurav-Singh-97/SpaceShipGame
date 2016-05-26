#include <QApplication>
#include <QGraphicsScene>
//#include <QGraphicsRectItem>
#include "myrect.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item to put into the scene
    MyRect * player = new MyRect();
    player->setRect(0, 0, 100, 100);

    scene->addItem(player);

    // make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // add a view
    QGraphicsView * view = new QGraphicsView(scene);
    // or can use view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800, 600);
    scene->setSceneRect(0, 0, 800, 600);

    player->setPos(view->width()/2, view->height()-player->rect().height());

    return a.exec();
}
