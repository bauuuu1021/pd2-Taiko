#include "drum2.h"
#include <QTimer>
#include <QGraphicsRectItem>

drum2::drum2()
{
    //create a drum
    setRect(200,0,50,10);


    //connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void drum2::move()
{
    setPos(x()-5,y());
}
