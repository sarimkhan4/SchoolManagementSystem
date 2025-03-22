QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminPanel.cpp \
    AttendanceManagement.cpp \
    ClassScheduleManagement.cpp \
    DatabaseSetup.cpp \
    ExamManagement.cpp \
    Login.cpp \
    StudentManagement.cpp \
    TeacherManagement.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminPanel.h \
    AttendanceManagement.h \
    ClassScheduleManagement.h \
    DatabaseSetup.h \
    ExamManagement.h \
    Login.h \
    StudentManagement.h \
    TeacherManagement.h \
    mainwindow.h

FORMS += \
    AdminPanel.ui \
    AttendanceManagement.ui \
    ClassScheduleManagement.ui \
    ExamManagement.ui \
    Login.ui \
    StudentManagement.ui \
    TeacherManagement.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += "C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/include"
LIBS += -L"C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/lib" -llibmysql

DISTFILES +=
