#-------------------------------------------------
#
# Project created by QtCreator 2019-04-05T00:23:34
#
#-------------------------------------------------

QT       += core gui concurrent
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AIMedicalSupporter
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

CONFIG += c++17

RC_ICONS=logoHL.ico
SOURCES += \
    dialog.cpp \
    logger.cpp \
    main.cpp \
    mainwindow.cpp \
    myscene.cpp \
    qzoom.cpp

HEADERS += \
    dialog.h \
    logger.h \
    mainwindow.h \
    myscene.h \
    qzoom.h \
    ui_dialog.h \
    ui_mainwindow.h

FORMS += \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    lib.qrc

#! Libtorch
#win32:CONFIG(release, debug|release): LIBS += -L"D:/Cpp lib/libtorch_release/lib" -ltorch -lc10 -ltorch_cpu
#else:win32:CONFIG(debug, debug|release): LIBS += -L"D:/Cpp lib/libtorch_debug/lib" -ltorch -ltorch_cpu -lc10
#INCLUDEPATH += "D:/Cpp lib/libtorch_release/include/torch/csrc/api/include"
#INCLUDEPATH += "D:/Cpp lib/libtorch_release/include"
#DEPENDPATH += "D:/Cpp lib/libtorch_release/include"

# OpenCV
win32:CONFIG(release, debug|release): LIBS += -LE:/opencv_4.5.1/opencv/build/x64/vc15/lib/ -lopencv_world451
else:win32:CONFIG(debug, debug|release): LIBS += -LE:/opencv_4.5.1/opencv/build/x64/vc15/lib/ -lopencv_world451d
INCLUDEPATH += E:/opencv_4.5.1/opencv/build/include
DEPENDPATH += E:/opencv_4.5.1/opencv/build/include

