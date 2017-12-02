greaterThan(QT_MAJOR_VERSION, 5)
QT       += core gui widgets
TARGET = gearoenix-editor
TEMPLATE = app
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000
SOURCES += \
        main.cpp \
        edit-main-window.cpp \
    edit-engine.cpp
HEADERS += \
        edit-main-window.hpp \
    edit-engine.hpp
FORMS += \
        edit-main-window.ui
