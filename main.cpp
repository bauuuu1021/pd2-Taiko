#include <QApplication>
#include "hope.h"
#include "score.h"
#include "key.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    hope * h= new hope();
    h->show();


    return a.exec();
}
