QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UDPSender
TEMPLATE = app

SOURCES += main.cpp
widget.cpp

HEADERS += widget.h
