# Beginning of Makefile.

CC   = gcc
CFLAGS = -Ilib
OBJS = obj/main.o obj/dictionary.o obj/llist.o

default: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o dogthought

obj/main.o: src/main.c lib/dictionary.h
	$(CC) $(CFLAGS) -c src/main.c -o $@

obj/dictionary.o : src/dictionary.c lib/dictionary.h lib/llist.h
	$(CC) $(CFLAGS) -c src/dictionary.c -o $@

obj/llist.o: src/llist.c lib/llist.h
	$(CC) $(CFLAGS) -c src/llist.c -o $@

clean:
	rm -f dogthought $(OBJS)

# End of Makefile.