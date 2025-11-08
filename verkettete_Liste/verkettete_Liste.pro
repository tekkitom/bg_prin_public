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
    modeldata.cpp \
        widget.cpp \
    element.cpp

HEADERS  += widget.h \
    element.h \
    modeldata.h

FORMS    += widget.ui
