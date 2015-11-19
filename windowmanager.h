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
private:
    static WindowManager* _instance;

    WindowManager(WindowManager const&);
    void operator=(WindowManager const&);
    //virtual ~WindowManager();

    QWidget *mainPageWidget;
    QWidget *menuPageWidget;
    QWidget *actionsPageWidget;
    QWidget *addActionPageWidget;
    QWidget *callActionPageWidget;
    QWidget *textActionPageWidget;
    QWidget *emailActionPageWidget;
    QWidget *settingsPageWidget;
    QStackedLayout *stackedLayout;

protected:
    WindowManager(QWidget *parent = 0);



public:
    static WindowManager* getInstance();
    void changePage(int x);
};

#endif // WINDOWMANAGER_H
