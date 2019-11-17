CC=gcc
FLAGS= -Wall -g

all:mymaths mymathd mains maind 

mymaths:libmyMath.a

mymathd:libmyMath.so

libmyMath.a:power.o basicMath.o myMath.h
	 ar rcs libmyMath.a power.o basicMath.o myMath.h

libmyMath.so:power.o basicMath.o	myMath.h
	$(CC) -shared -o libmyMath.so -fPIC power.o basicMath.o myMath.h

basicMath.o: basicMath.c myMath.h 
	$(CC) -c basicMath.c

power.o: power.c myMath.h 
	$(CC) -c power.c

mains:main.o libmyMath.a
	$(CC) $(FLAGS) -o  mains main.o libmyMath.a 

maind:main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so 

main.o:main.c myMath.h
	$(CC) -c main.c

.PHONY:clean 

clean:
	rm -f *.o *.a *.so mains maind