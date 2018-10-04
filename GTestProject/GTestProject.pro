include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_gtest.h \
    ../ConsoleProject/SortingModule/sname.h \
    ../ConsoleProject/StringPolindrome/stringpolindrome.h \
    ../ConsoleProject/CharArraySorts/chararraysorts.h

SOURCES += \
        main.cpp \
    ../ConsoleProject/SortingModule/sname.cpp \
    ../ConsoleProject/StringPolindrome/stringpolindrome.cpp \
    ../ConsoleProject/CharArraySorts/chararraysorts.cpp
