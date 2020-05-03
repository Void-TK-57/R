#include <QWidget>
#include "ui.h"

// UI Constructor
UI::UI(QWidget *parent = 0) : QWidget(parent)  {
    // call setup function
    setup();
}

// setup function
void UI::setup() {
    this->resize(250, 150);
    this->setWindowTitle("Test");
    this->show();
}
