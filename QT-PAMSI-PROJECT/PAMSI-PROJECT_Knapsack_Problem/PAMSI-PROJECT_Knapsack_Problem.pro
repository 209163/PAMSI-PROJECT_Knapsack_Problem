#-------------------------------------------------
#
# Project created by QtCreator 2016-05-21T14:10:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PAMSI-PROJECT_Knapsack_Problem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Goods.cpp \
    Store.cpp \
    Thief.cpp

HEADERS  += mainwindow.h \
    Goods.h \
    Store.h \
    Thief.h

FORMS    += mainwindow.ui
CONFIG   += c++11
