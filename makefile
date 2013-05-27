CC=g++
CXXFLAGS=-ansi -pedantic -Wall -Wextra

BINNAME=program

all: ${BINNAME}


program: main.o conversion.o
	g++ $+ -o ${BINNAME}

main.o: main.cpp conversion.h
	g++ -c ${CXXFLAGS} $<

conversion.o: conversion.cpp conversion.h
	g++ -c ${CXXFLAGS} $<



clean:
	rm -f ${BINNAME}
	rm -f *.o

.PHONY: all clean
