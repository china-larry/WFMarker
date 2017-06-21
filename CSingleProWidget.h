#ifndef CSINGLEPROWIDGET_H
#define CSINGLEPROWIDGET_H

#include <QWidget>
#include <QMoreWidget/CProjectInfoWidget.h>
class CSingleProWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CSingleProWidget(QWidget *parent = 0);

signals:

public slots:

private:
    CProjectInfoWidget *m_pProjectInfoWidget;
};

#endif // CSINGLEPROWIDGET_H
