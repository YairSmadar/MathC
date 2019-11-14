CC=gcc
FLAGS= -Wall -g

all:mymaths mymathd mains maind
	
mymaths:Power.o basicMath.o myMath.h
	 ar rcs libmyMath.a Power.o basicMath.o myMath.h

mymathd:mymaths Power.o basicMath.o	myMath.h
	$(CC) -shared -o libmyMath.so -fPIC Power.o basicMath.o myMath.h

basicMath.o: basicMath.c myMath.h 
	$(CC) -c basicMath.c

Power.o: Power.c myMath.h 
	$(CC) -c Power.c

mains:main.o mymaths
	$(CC) $(FLAGS) -o  mains main.o libmyMath.a 

maind:main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so 

main.o:main.c myMath.h
	$(CC) -c main.c

# exec: main.o Power.o basicMath.o myMath.h
# 	$(CC) main.o Power.o basicMath.o myMath.h -o exec

make clean:
	rm -f *.o *.a *.so