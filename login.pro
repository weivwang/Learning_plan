QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addtask.cpp \
    attribute.cpp \
    calendarframe.cpp \
    dynamic_button.cpp \
    main.cpp \
    login.cpp \
    mainmenu.cpp \
    mainwindow.cpp \
    mpushbutton.cpp \
    processbar2.cpp \
    qtcharts2.cpp \
    register.cpp \
    task.cpp \
    taskalert.cpp

HEADERS += \
    addtask.h \
    attribute.h \
    calendarframe.h \
    dynamic_button.h \
    login.h \
    mainmenu.h \
    mainwindow.h \
    mpushbutton.h \
    processbar2.h \
    qtcharts2.h \
    register.h \
    task.h \
    taskalert.h

FORMS += \
    addtask.ui \
    attribute.ui \
    calendarframe.ui \
    dynamic_button.ui \
    login.ui \
    mainmenu.ui \
    mainwindow.ui \
    processbar2.ui \
    qtcharts2.ui \
    register.ui \
    task.ui \
    taskalert.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myPicture.qrc \
    my_resourse.qrc \
    src.qrc \


QT += sql

DISTFILES += \
    图标.png

