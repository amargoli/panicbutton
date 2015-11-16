#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <QMainWindow>
#include <QWidget>
#include <QStackedLayout>
#include <QApplication>
#include <Qtgui>
#include <MainScreen.h>
#include <menu.h>
#include <Actions.h>
#include <AddAction.h>
#include <calladdaction.h>
#include <text.h>
#include <email.h>
#include <settings.h>

class WindowManager : public QWidget
{
public:
    WindowManager(QWidget *parent = 0);
};

#endif // WINDOWMANAGER_H
