#-------------------------------------------------
#
# Project created by QtCreator 2012-01-06T07:56:02
#
#-------------------------------------------------

QT       += core gui xml widgets

TARGET = StreamControl
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    configwindow.cpp \
    csv.cpp

HEADERS  += mainwindow.h \
    configwindow.h \
    config.h \
    csv.h

FORMS    += \
    configwindow.ui

RESOURCES += \
    resources.qrc
	
RC_FILE = streamcontrol.rc
