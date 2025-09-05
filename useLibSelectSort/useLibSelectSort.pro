QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widgui.cpp

HEADERS += \
    lib_selectionSort_binSearch/beachlounger.h \
    widgui.h

FORMS += \
    widgui.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../bg_prin_private2/lib_selectionSort_binSearch/build/Desktop_Qt_6_9_2_MinGW_64_bit-Debug/release/ -llib_selectionSort_binSearch
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../bg_prin_private2/lib_selectionSort_binSearch/build/Desktop_Qt_6_9_2_MinGW_64_bit-Debug/debug/ -llib_selectionSort_binSearch
else:unix: LIBS += -L$$PWD/../../bg_prin_private2/lib_selectionSort_binSearch/build/Desktop_Qt_6_9_2_MinGW_64_bit-Debug/ -llib_selectionSort_binSearch

INCLUDEPATH += $$PWD/../../bg_prin_private2/lib_selectionSort_binSearch
DEPENDPATH += $$PWD/../../bg_prin_private2/lib_selectionSort_binSearch
