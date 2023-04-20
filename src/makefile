Name = New beginnings


CC = gcc
pkg = abu
CFLAGS +=-Wall

CFLAGS += -I../include/
OBJS = *.o


all : $(pkg)
	
$(pkg) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(pkg)
	$(MAKE) clean

$(OBJS) :
	$(CC) $(CFLAGS) -c *.c
clean :
	rm -f $(OBJS)
	echo "Clean done"

sweep :
	rm $(REBUILDABLES)
