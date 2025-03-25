QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminPanel/AdminPanel.cpp \
    AdminPanel/AttendanceManagement.cpp \
    AdminPanel/ClassScheduleManagement.cpp \
    DatabaseSetup.cpp \
    AdminPanel/ExamManagement.cpp \
    Login.cpp \
    AdminPanel/StudentManagement.cpp \
    StudentPanel/StudentPanel.cpp \
    AdminPanel/TeacherManagement.cpp \
    TeacherPanel/TeacherPanel.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminPanel/AdminPanel.h \
    AdminPanel/AttendanceManagement.h \
    AdminPanel/ClassScheduleManagement.h \
    DatabaseSetup.h \
    AdminPanel/ExamManagement.h \
    Login.h \
    AdminPanel/StudentManagement.h \
    StudentPanel/StudentPanel.h \
    AdminPanel/TeacherManagement.h \
    TeacherPanel/TeacherPanel.h \
    mainwindow.h

FORMS += \
    AdminPanel/AdminPanel.ui \
    AdminPanel/AttendanceManagement.ui \
    AdminPanel/ClassScheduleManagement.ui \
    AdminPanel/ExamManagement.ui \
    Login.ui \
    AdminPanel/StudentManagement.ui \
    StudentPanel/StudentPanel.ui \
    AdminPanel/TeacherManagement.ui \
    TeacherPanel/TeacherPanel.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += "C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/include"
LIBS += -L"C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/lib" -llibmysql

DISTFILES +=
