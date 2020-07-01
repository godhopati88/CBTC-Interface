QT += core network
QT -= gui

TARGET = CBI_VITAL
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myclient.cpp \
    myserver.cpp \
    dataexchange.cpp \
    ../_General_Path/myudp.cpp \
    ../_General_Path/converter.cpp \
    ../_General_Path/mytcpserver.cpp \
    ../_General_Path/mytcpclient.cpp \
    commVITAL.cpp \
    ../_General_Path/crc16kermit.cpp \
    DataAplikasi/ert_main.c \
    DataAplikasi/VITALDEPOT.c \
    DataAplikasi/VITALMAIN.c \
    DataAplikasi/VITALALL.c \
    servercbi.cpp \
    udpycom.cpp



HEADERS += \
    myclient.h \
    myserver.h \
    dataexchange.h \
    ../_General_Path/myudp.h \
    ../_General_Path/converter.h \
    ../_General_Path/mytcpserver.h \
    ../_General_Path/mytcpclient.h \
    commVITAL.h \
    ../_General_Path/crc16kermit.h \
    DataAplikasi/model_reference_types.h \
    DataAplikasi/rtw_continuous.h \
    DataAplikasi/rtw_solver.h \
    DataAplikasi/rtwtypes.h \
    DataAplikasi/VITALALL.h \
    DataAplikasi/VITALALL_private.h \
    DataAplikasi/VITALALL_types.h \
    DataAplikasi/VITALDEPOT.h \
    DataAplikasi/VITALDEPOT_private.h \
    DataAplikasi/VITALDEPOT_types.h \
    DataAplikasi/VITALMAIN.h \
    DataAplikasi/VITALMAIN_private.h \
    DataAplikasi/VITALMAIN_types.h \
    servercbi.h \
    udpycom.h



target.path = /home/root/
INSTALLS += target

