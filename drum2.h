#ifndef DRUM2_H
#define DRUM2_H
#include <QGraphicsRectItem>
#include <QObject>

class drum2: public QObject,public QGraphicsRectItem {
        Q_OBJECT//rule

public: drum2();

    public slots:
        void move();
};


#endif // DRUM2_H
