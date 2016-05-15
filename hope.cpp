#include "hope.h"
#include "drum.h"
#include "drum2.h"
#include "key.h"
#include "hit.h"
#include <QTimer>
#include <stdlib.h>
#include <QDebug>
#include <time.h>
#include <QThread>
#include <QGraphicsScene>

int i=0;

hope::hope()
{
    QTimer * timer = new QTimer;





    //add to view and set limit
    scene = new QGraphicsScene();

    QGraphicsRectItem * rect = new QGraphicsRectItem();
    QGraphicsRectItem * rect2 = new QGraphicsRectItem();
    QGraphicsRectItem * rect3 = new QGraphicsRectItem();
    QGraphicsRectItem * rect4 = new QGraphicsRectItem();

    key * k = new key();
    k->setPos(-100,-80);
    k->setFlag(QGraphicsItem::ItemIsFocusable);
    k->setFocus();

    rect->setRect(-100,-80,10,10);
    rect2->setRect(-100,80,10,10);
    rect3->setRect(250,-80,1,1);
    rect4->setRect(250,80,1,1);
    scene->addItem(rect);
    scene->addItem(rect2);
    scene->addItem(rect3);
    scene->addItem(rect4);
    scene->addItem(k);

    view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(create()));
    timer->start(3000);
}

void hope::create()
{

    drum * d = new drum;
    drum2 * d2 = new drum2;



    srand(time(NULL));
    int r=rand()%2;

    if (r==0)
    {

        scene->addItem(d);

    }
    else
    {

        scene->addItem(d2);

    }
}
//exchange qdebug with "put drum on the scene"

/*******************************************
#include "hope.h"
#include "drum.h"
#include "drum2.h"
#include <QTimer>
#include <stdlib.h>
#include <QDebug>
#include <time.h>
#include <QThread>
drum * d = new drum;
drum2 * d2 = new drum2;

//QGraphicsScene * scene = new QGraphicsScene;  //add->wrong

hope::hope()
{
    QTimer * timer = new QTimer;

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(create()));
    timer->start(2000);
}

void hope::create()
{
    srand(time(NULL));
    int r=rand()%2;

    if (r==0)
    {
        qDebug()<<"a";

    }
    else
    {
        qDebug()<<"b";


    }
}
//exchange qdebug with "put drum on the scene"
************************************************************/
