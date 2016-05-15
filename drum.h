#ifndef DRUM_H
#define DRUM_H
#include <QGraphicsRectItem>
#include <QObject>

class drum: public QObject,public QGraphicsRectItem {
        Q_OBJECT//rule

public: drum();

    public slots:
        void move();
};

#endif // DRUM_H
