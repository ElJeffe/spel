# -------------------------------------------------
# Project created by QtCreator 2009-03-31T19:27:52
# -------------------------------------------------
QT += network \
    xml
QT -= gui
TARGET = SpelCore
TEMPLATE = lib
DEFINES += SPELCORE_LIBRARY
SOURCES += spelcore.cpp \
    server.cpp \
    udplistener.cpp \
    settings.cpp
HEADERS += spelcore.h \
    SpelCore_global.h \
    server.h \
    udplistener.h \
    settings.h
