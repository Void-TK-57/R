//File: menubar.h
#ifndef _MENUBAR_H_
#define _MENUBAR_H_

#include <QWidget>
#include <QMenuBar>
#include <QMenu>

class MenuBar : public QMenuBar {

    public:
        MenuBar(QWidget*);
    protected:
        QMenu* file_menu;
        QMenu* plot_menu;
        QMenu* help_menu;
        void setup();

};

#endif
