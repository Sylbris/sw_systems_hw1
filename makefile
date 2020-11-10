CC=gcc
CFLAGS= -Wall -g
LIBOBJECTS=basicMath.o power.o
OBJECTS_MAIN=main.o

mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(CFLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a 

maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(CFLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
	
mymaths: libmyMath.a

mymathd: libmyMath.so

libmyMath.a: $(LIBOBJECTS)                 
	ar -rcs libmyMath.a $(LIBOBJECTS)

libmyMath.so: $(LIBOBJECTS)
	$(CC) -shared -o libmyMath.so $(LIBOBJECTS)

basicMath.o: basicMath.c myMath.h
	$(CC) $(CFLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(CFLAGS) -c power.c
	
main.o: main.c myMath.h
	$(CC) $(CFLAGS) -c main.c
	
.PHONY: clean all

all: libmyMath.so libmyMath.a mains maind
	
clean:              #clean all .o files.
	rm -f mains maind *.o *.so *.a
