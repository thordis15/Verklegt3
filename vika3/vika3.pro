#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T10:12:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = vika3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    core.cpp \
    ui.cpp \
    individual.cpp \
    people.cpp \
    sqlitedata.cpp \
    computer.cpp \
    machines.cpp

HEADERS  += mainwindow.h \
    core.h \
    globalconstants.h \
    ui.h \
    individual.h \
    people.h \
    sqlitedata.h \
    computer.h \
    machines.h

FORMS    += mainwindow.ui
