#include "gamewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameWindow w;
    w.setWindowTitle("Super Solitaire");
    w.show();
    return a.exec();
}
