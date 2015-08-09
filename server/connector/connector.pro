######################################################################
# Automatically generated by qmake (2.01a) Wed Jan 11 15:21:22 2012
######################################################################

TEMPLATE = app

TARGET = Client

OBJECTS_DIR=.obj

DEPENDPATH += .

INCLUDEPATH += . ../reactor/ ../network/ ../common/ ../protocol/ ../dispatch ../threadpool ../active ../circle /usr/local/include ../group ../utils ../mysql ../dispatch 

LIBS += -L /usr/local/lib -lprotobuf -lmysqlcppconn -lpthread -lboost_thread -lboost_system

# Input
HEADERS += Client.hpp

SOURCES += ../common/Conf.cpp \
../common/Daemon.cpp \ 
../circle/CircleBuf.cpp \
../network/Acceptor.cpp \
../network/Address.cpp \
../network/Connector.cpp \
../network/Datagram.cpp \
../network/SocketBase.cpp \
../network/SocketType.cpp \
../network/Stream.cpp \
../reactor/Epoll.cpp \
../reactor/EventHandler.cpp \
../reactor/Exception.cpp \
../reactor/Reactor.cpp \
../reactor/ReactorImpl.cpp \
../reactor/ReactorService.cpp \
../reactor/TimerQueue.cpp \
../protocol/Head.cpp \
../mysql/MySQL.cpp \
../protocol/FightClub.pb.cc \
../active/ActiveQueueSigalton.cpp \
../dispatch/PrintCenter.cpp \
Client.cpp \
ClientImpl.cpp \
TestCase.cpp \
Main.cpp

#CONFIG
CONFIG -= qt
CONFIG += debug
