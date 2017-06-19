#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// Hex文件生成系统
#include <QMainWindow>
#include <QAction>
#include <QTabWidget>
#include <QLayout>
#include <QLabel>
#include "CProjectKindWidget.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public:
    void myTest();
private:
    Ui::MainWindow *ui;
    // 菜单栏
    // 系统
    QMenu *m_pUserMenu;
    QAction *m_pVipUserLoad;
    QAction *m_pNormalUserLoad;
    // 关于
    QAction *m_pAboutAction;
    // 项目种类
    CProjectKindWidget *m_pProjectKindWidget;
    // 选项卡
    QTabWidget *m_pProTableWidget;

};

#endif // MAINWINDOW_H