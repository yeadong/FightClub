######################################################################
# Automatically generated by qmake (2.01a) Fri Oct 21 15:32:09 2011
######################################################################

TEMPLATE = app
TARGET = Reactor
DEPENDPATH += .
INCLUDEPATH += . ../common
LIBS += -lboost_system -lboost_thread

# Input
HEADERS += EventHandler.hpp Pipe.hpp PipeHandler.hpp Reactor.hpp ReactorImpl.hpp ../common/Global.hpp ../common/InnerChange.hpp ../common/Base64.hpp ../common/Daemon.hpp ../common/Conf.hpp
SOURCES += EventHandler.cpp Main.cpp Pipe.cpp PipeHandler.cpp Reactor.cpp Epoll.cpp ReactorImpl.cpp Exception.cpp ../common/Base64.cpp ../common/Daemon.cpp ../common/Conf.cpp

CONFIG -= qt
CONFIG += debug