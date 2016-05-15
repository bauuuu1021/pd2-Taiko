#include "drum.h"
#include <QTimer>
#include <QGraphicsRectItem>
#include <QDebug>



drum::drum()
{
    //create a drum
    setRect(200,-20,10,50);

    //connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);



}

void drum::move()
{
    setPos(x()-5,y());

}
