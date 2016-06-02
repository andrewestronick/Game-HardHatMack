#-------------------------------------------------
#
# Project created by QtCreator 2016-03-17T22:12:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HardHatMack
TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    sprite.cpp

HEADERS  += \
    game.h \
    sprite.h

FORMS    +=

RESOURCES += \
    resource.qrc

DISTFILES += \
    other/newhhm.xcf \
    other/walkingMan.xcf \
    other/spriteSheet.xcf
