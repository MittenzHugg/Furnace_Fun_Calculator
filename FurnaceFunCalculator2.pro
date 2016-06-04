#-------------------------------------------------
#
# Project created by QtCreator 2016-04-29T00:03:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FurnaceFunCalculator2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qrightclickbutton.cpp

HEADERS  += mainwindow.h \
    qrightclickbutton.h

FORMS    += mainwindow.ui

RESOURCES += \
    furnacefunresources.qrc

ICON += \
    Images\Brentilda_icon.ico
win32: RC_ICONS += Images\Brentilda_icon.ico
CONFIG += static
