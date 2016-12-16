#-------------------------------------------------
#
# Project created by QtCreator 2016-02-19T22:10:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pid
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tuner.cpp

HEADERS  += mainwindow.h \
    tuner.h

FORMS    += mainwindow.ui \
    tuner.ui

QT += xml
