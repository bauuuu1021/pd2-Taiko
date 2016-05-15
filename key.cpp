#include "key.h"
#include "drum.h"
#include "drum2.h"
#include <QDebug>
#include <typeinfo>

key::key(QGraphicsItem * parent):QGraphicsRectItem(parent)
{
    setRect(-20,0,50,173);
}

void key::keyPressEvent(QKeyEvent  *event)
{

    // get a list of all the items currently colliding with this bullet
    QList<QGraphicsItem *> colliding_items = collidingItems();

    if (event->key()==Qt::Key_F)
        for (int i = 0, n = colliding_items.size(); i < n; ++i)
        {

        if (typeid(*(colliding_items[i])) == typeid(drum))
        {
            // increase the score

             delete colliding_items[i];
             return;
        }

        }
    if (event->key()==Qt::Key_J)
        for (int i = 0, n = colliding_items.size(); i < n; ++i)
        {

        if (typeid(*(colliding_items[i])) == typeid(drum2))
        {
            // increase the score

             delete colliding_items[i];
             return;
        }

        }
}
