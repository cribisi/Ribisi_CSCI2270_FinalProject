#Makefile for finalProject
PROG=final
CC=g++
OBJS=finalProject.o Graph.o
CPPFLAGS= -Wall -std=c++11

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)
finalProject.o: finalProject.cpp
	$(CC) -c $(CPPFLAGS) finalProject.cpp
Graph.o: Graph.h Graph.cpp
	$(CC) -c $(CPPFLAGS) Graph.cpp
clean:
	$(RM) $(PROG) $(OBJS)
