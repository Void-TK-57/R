#include <QWidget>
#include "menubar.h"

// MenuBar Constructor
MenuBar::MenuBar(QWidget *parent) : QMenuBar(parent)  {
    // call setup function
    setup();
}

// setup function
void MenuBar::setup() {
    // create menus
    this->file_menu = this->addMenu("Arquivo");
    this->plot_menu = this->addMenu("Gráfico");
    this->help_menu = this->addMenu("Ajuda");
}
