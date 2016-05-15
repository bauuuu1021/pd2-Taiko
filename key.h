#ifndef KEY_H
#define KEY_H
#include <QList>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QGraphicsView>

class key:public QGraphicsRectItem
{
public:key(QGraphicsItem * parent=0);
       void keyPressEvent(QKeyEvent * event);
       QGraphicsScene * scene;
       QGraphicsView * view;
public slots:

};

#endif // KEY_H
