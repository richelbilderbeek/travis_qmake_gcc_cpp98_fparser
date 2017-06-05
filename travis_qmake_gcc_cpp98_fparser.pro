# Files
SOURCES += main.cpp

# High warning levels, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror

# fparser
INCLUDEPATH += ../fparser
LIBS += -L../fparser -lfparser
