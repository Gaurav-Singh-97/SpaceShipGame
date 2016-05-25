#include "myrect.h"
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "You just pressed a key...";
}
