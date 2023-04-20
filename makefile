Name = New beginningsz

SRC = $(shell pwd)
CC = gcc
pkg = abu
sourceDir = *.c
OBJS = *.o
REBUILDABLES = $(OBJS) $(pkg)
CFLAGS += -g -Wall -v
CFLAGS += -I$(SRC)/include/ -I$(SRC)/src/

export SRC pkg OBJS CFLAGS REBUILDABLES CC sourceDir

all : 
	$(MAKE) -C src

clean :
	$(MAKE) -C src clean
	
sweep :
	$(MAKE) -C src sweep
