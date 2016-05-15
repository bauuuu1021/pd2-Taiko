#include "hit.h"
#include "score.h"
#include "drum.h"
#include <QList>
#include <QKeyEvent>
#include <QDebug>

void hit::right()
{
    // get a list of all the items currently colliding with this bullet
    //QList<QGraphicsItem *> right_items = right_items();
    drum * d = new drum();

    // if one of the right_items arrive at right time
    //for (int i = 0, n = right_items.size(); i < n; ++i){
        if (d->pos().x()<10){
            qDebug()<<"hii";
            /*
            // increase the score
            game->score->increase();

            // remove them from the scene (still on the heap)
            scene()->removeItem(right_items[i]);

            // delete them from the heap to save memory
            delete right_items[i];
            delete this;

            // return (all code below refers to a non existint bullet)
            */
            return;
        }
    }
