QT += core network
QT -= gui

CONFIG += c++11

TARGET = atp_wayside
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    dataexchange.cpp \
    mysslserver.cpp \
    sslserver.cpp \
    ../_General_Path/converter.cpp \
    ../_General_Path/crc16kermit.cpp \
    ../_General_Path/mytcpclient.cpp \
    ../_General_Path/mytcpserver.cpp \
    ../_General_Path/myudp.cpp \
    myserver.cpp \
    servercbi.cpp \
    udpycom.cpp \
    serveratp.cpp

HEADERS += \
    dataexchange.h \
    mysslserver.h \
    sslserver.h \
    ../_General_Path/converter.h \
    ../_General_Path/crc16kermit.h \
    ../_General_Path/mytcpclient.h \
    ../_General_Path/mytcpserver.h \
    ../_General_Path/myudp.h \
    myserver.h \
    servercbi.h \
    udpycom.h \
    serveratp.h

RESOURCES += \
    res.qrc

target.path = /home/root/
INSTALLS += target
