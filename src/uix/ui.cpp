#include <QWidget>
#include "ui.h"
#include "menubar.cpp"

// UI Constructor
UI::UI(QWidget *parent = 0) : QMainWindow(parent)  {
    // call setup function
    setup();
}

// setup function
void UI::setup() {
    // create MenuBar
    this->menu_bar = new MenuBar(this);
    // set menu bar
    this->setMenuBar(this->menu_bar);
    this->setWindowTitle("Test");
}
