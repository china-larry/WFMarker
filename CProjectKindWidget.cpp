#include "CProjectKindWidget.h"

CProjectKindWidget::CProjectKindWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(800, 50);
    // 项目选择
    m_pSingleProRadio = new QRadioButton("单个项目", this);
    m_pDoubleProRadio = new QRadioButton("两个项目", this);
    m_pThreeProRadio = new QRadioButton("三个项目", this);
    m_pQualitativeProRadio = new QRadioButton("定性项目", this);
    // Hex按钮
    m_pReadHexButton = new QPushButton("读取Hex", this);
    m_pSaveHexButton = new QPushButton("保存Hex", this);
    m_pExitButton = new QPushButton("退出", this);

    QHBoxLayout *pLayout = new QHBoxLayout;
    pLayout->setSpacing(20);
    pLayout->addWidget(m_pSingleProRadio);
    pLayout->addWidget(m_pDoubleProRadio);
    pLayout->addWidget(m_pThreeProRadio);
    pLayout->addWidget(m_pQualitativeProRadio);
    //
    pLayout->addStretch(100);
    //
    pLayout->addWidget(m_pReadHexButton);
    pLayout->addWidget(m_pSaveHexButton);
    pLayout->addWidget(m_pExitButton);

    this->setLayout(pLayout);
}
