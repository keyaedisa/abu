Name = New beginnings

all : $(pkg)
	
$(pkg) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(pkg)
	$(MAKE) clean 

$(OBJS) : $(sourceDir)
	$(CC) $(CFLAGS) -c *.c

clean :
	rm -f $(OBJS)
	echo "Clean done"

sweep :
	rm $(REBUILDABLES)
