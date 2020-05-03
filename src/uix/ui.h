//File: ui.h
#ifndef _UI_H_
#define _UI_H_

#include <QWidget>
#include <QMainWindow>
#include "menubar.h"

class UI : public QMainWindow {

    public:
        UI(QWidget*);
    protected:
        MenuBar* menu_bar;
        void setup();

};

#endif
