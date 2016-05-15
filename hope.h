#ifndef HOPE_H
#define HOPE_H
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include "drum.h"
class hope:public QObject,  public QGraphicsRectItem
{
    Q_OBJECT
public :
     hope();

     QGraphicsScene * scene;
     QGraphicsView * view;


public slots:
     void create();
     void receivelogin();
};

#endif // HOPE_H
