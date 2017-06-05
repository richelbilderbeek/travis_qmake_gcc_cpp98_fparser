SOURCES += main.cpp
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror

INCLUDEPATH += $$PWD/../fparser
LIBS += $$PWD/../fparser/lib.so
