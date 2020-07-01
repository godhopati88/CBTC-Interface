QT += core network
QT -= gui

TARGET = CBI_NVITAL
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myclient.cpp \
    dataexchange.cpp \
    commNONVITAL.cpp \
    ../_General_Path/converter.cpp \
    ../_General_Path/crc16kermit.cpp \
    ../_General_Path/myudp.cpp \
    DataAplikasi/NONVITALALL.c \
    DataAplikasi/NONVITALDEPOT.c \
    DataAplikasi/NONVITALMAIN.c \
    ../_General_Path/mytcpclient.cpp \
    ../_General_Path/mytcpserver.cpp \
    udp.cpp \
    serverars.cpp
HEADERS += \
    myclient.h \
    dataexchange.h \
    commNONVITAL.h \
    ../_General_Path/converter.h \
    ../_General_Path/crc16kermit.h \
    ../_General_Path/myudp.h \
    DataAplikasi/NONVITALALL.h \
    DataAplikasi/NONVITALALL_private.h \
    DataAplikasi/NONVITALALL_types.h \
    DataAplikasi/NONVITALDEPOT.h \
    DataAplikasi/NONVITALDEPOT_private.h \
    DataAplikasi/NONVITALDEPOT_types.h \
    DataAplikasi/NONVITALMAIN.h \
    DataAplikasi/NONVITALMAIN_private.h \
    DataAplikasi/NONVITALMAIN_types.h \
    DataAplikasi/rtw_continuous.h \
    DataAplikasi/rtw_solver.h \
    DataAplikasi/rtwtypes.h \
    DataAplikasi/model_reference_types.h \
    ../_General_Path/mytcpclient.h \
    ../_General_Path/mytcpserver.h \
    udp.h \
    serverars.h

target.path = /home/nvtl/
INSTALLS += target
