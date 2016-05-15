#include <QApplication>
#include "hope.h"
#include "score.h"
#include "key.h"
#include "dig.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    hope h;
        dig abc;
        abc.show();
         QObject::connect(&abc,SIGNAL(showmainwindow()),&h,SLOT(receivelogin()));

    return a.exec();
}
