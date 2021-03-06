#-------------------------------------------------
#
# Project created by QtCreator 2017-06-17T11:37:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IDMarker
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    CSingleProWidget.cpp \
    QMoreWidget/CProjectInfoWidget.cpp \
    QMoreWidget/CProjectKindWidget.cpp \
    CProTitleWidget/CProjectInfoWidget.cpp \
    CProTitleWidget/CProjectKindWidget.cpp \
    CProTitleWidget/CFcPeakWidget.cpp \
    CNatureTempletWidget/CFcPeakWidget.cpp \
    CNatureTempletWidget/CProjectInfoWidget.cpp \
    CNatureTempletWidget/CProjectKindWidget.cpp \
    OneProjectWidget/COneProWidget.cpp

HEADERS  += mainwindow.h \
    CSingleProWidget.h \
    QMoreWidget/CProjectInfoWidget.h \
    QMoreWidget/CProjectKindWidget.h \
    CProTitleWidget/CProjectInfoWidget.h \
    CProTitleWidget/CProjectKindWidget.h \
    CProTitleWidget/CFcPeakWidget.h \
    CNatureTempletWidget/CFcPeakWidget.h \
    CNatureTempletWidget/CProjectInfoWidget.h \
    CNatureTempletWidget/CProjectKindWidget.h \
    OneProjectWidget/COneProWidget.h

FORMS    += mainwindow.ui
