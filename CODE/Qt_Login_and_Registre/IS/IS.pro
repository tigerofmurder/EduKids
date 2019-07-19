#-------------------------------------------------
#
# Project created by QtCreator 2019-07-01T15:48:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IS
TEMPLATE = app


# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        form.cpp \
    selection.cpp \
    ope.cpp

HEADERS += \
        mainwindow.h \
        form.h \
        record.h \
        system.h \
    selection.h \
    ope.h \
    operation.h
FORMS += \
        mainwindow.ui \
        form.ui \
    selection.ui \
    ope.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += 'C:/Qt/SFML/include'
DEPENDPATH += 'C:/Qt/SFML/include'

#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-audio.a
#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-graphics.a
#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-main.a
#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-network.a
#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-window.a
#CONFIG(release, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-system.a


#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-audio-d.a
#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-graphics-d.a
#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-main-d.a
#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-network-d.a
#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-window-d.a
#CONFIG(debug, debug|release): LIBS +=C:/Qt/SFML/lib/libsfml-system-d.a

RESOURCES += \
    font.qrc

