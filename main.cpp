#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QPixmap>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   //开机动画
    QPixmap pixmap(":/11.jpg");
        QSplashScreen splash(pixmap);
        splash.show();
        a.processEvents();

    MainWindow w;
    w.show();
    //
    splash.finish(&w);
    return a.exec();
}
