#include "keyboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Keyboard KB;
   // KB.setFixedSize(800,600);
    KB.show();

    return app.exec();
}
