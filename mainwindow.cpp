#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(800, 600);
    // 菜单栏
    m_pUserMenu = new QMenu("系统");
    this->menuBar()->addMenu(m_pUserMenu);

    m_pVipUserLoad = m_pUserMenu->addAction("高级用户");
    m_pNormalUserLoad = m_pUserMenu->addAction("普通用户");
    // 关于
    m_pAboutAction = this->menuBar()->addAction("关于");
    //
    m_pProjectKindWidget = new CProjectKindWidget(this);
    // 选项卡
    m_pProTableWidget = new QTabWidget(this);
    QLabel *pLabel = new QLabel("单个项目");
    QLabel *pLabel2 = new QLabel("两个项目");
    QLabel *pLabel3 = new QLabel("三个项目");
    QLabel *pLabel4 = new QLabel("定性项目");
    m_pProTableWidget->addTab(pLabel, "第一个项目");
    m_pProTableWidget->addTab(pLabel2, "第二个项目");
    m_pProTableWidget->addTab(pLabel3, "第三个项目");
    m_pProTableWidget->addTab(pLabel4, "定性项目");




    // 布局
    QVBoxLayout *pLayout = new QVBoxLayout();
    pLayout->addWidget(m_pProjectKindWidget);
    pLayout->addWidget(m_pProTableWidget);

    QWidget *widget = new QWidget();
    setCentralWidget(widget);
    widget->setLayout(pLayout);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myTest()
{

}
