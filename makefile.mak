CC=g++
CXXFLAGS=-ansi -pedantic -Wall -Wextra

BINNAME=program
TESTNAME=program-test

all: ${BINNAME}

program: main.o conversion.o 
g++ $+ -o ${BINNAME}

main.o: main.cpp conversion.h
g++ -c ${CXXFLAGS} $<

conversion.o: conversion.cpp conversion.h
g++ -c ${CXXFLAGS} $<

check: ${TESTNAME}
./${TESTNAME}

TEST_CPPFLAGS=-I../gtest-1.6.0/include

${TESTNAME}: conversion-test.o conversion.o
g++ -static $+ -o ${TESTNAME} -L../gtest-1.6.0/lib/.libs -lgtest -lgtest_main -lpthread

conversion-test.o: conversion-test.cpp conversion.h
g++ ${TEST_CPPFLAGS} -c ${CXXFLAGS} $<

clean:
rm -f ${BINNAME}
rm -f ${TESTNAME}
rm -f *.o

.PHONY: all clean check
