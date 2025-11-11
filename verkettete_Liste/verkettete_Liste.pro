#-------------------------------------------------
#
# Project created by QtCreator 2017-12-09T09:56:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = verkettete_Liste
TEMPLATE = app


SOURCES += main.cpp\
    controller.cpp \
    guiwidget.cpp \
    modeldata.cpp \
    element.cpp

HEADERS  += \
    controller.h \
    element.h \
    guiwidget.h \
    modeldata.h

FORMS    += \
    guiwidget.ui
