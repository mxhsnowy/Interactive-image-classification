#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Enable support for high DPI screens
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    a.setOrganizationName("MICA-HUST");
    a.setApplicationName("AI Medical Supporter");
    MainWindow w;
    //qInstallMessageHandler(messageHandler);
    //std::string img_prefix=w.workingfolder.toStdString();
    //w.load_images(img_prefix);

//    QPixmap ss(":/img/splash screen 3.PNG");

//    QSplashScreen splash(ss);

//    splash.show();
//    splash.showMessage("Khởi tạo chương trình .");
//    a.thread()->sleep(1);
//    splash.showMessage("Khởi tạo chương trình ..");
//    a.thread()->sleep(1);
//    splash.showMessage("Khởi tạo chương trình ...");
//    a.processEvents();
   QPalette pal = a.palette();
   pal.setColor(QPalette::Window,Qt::GlobalColor::lightGray);
  a.setPalette(pal);

    w.show();
    w.setWindowState(Qt::WindowMaximized);
//    splash.finish(&w);
    return a.exec();
}
