#include <QApplication>

// include gui libs
#include "uix/ui.cpp"


int main(int argc, char *argv[]) {

    // create application
    QApplication app(argc, argv);

    // main ui
    UI* main_ui = new UI();
    // show ui Maximized
    main_ui->showMaximized();
    // execute application
    return app.exec();

}
