CC=gcc
FLAGS= -Wall -g

all:exec clean
	./exec
	
basicMath.o: basicMath.c myMath.h 
	$(CC) -c basicMath.c

Power.o: Power.c myMath.h 
	$(CC) -c Power.c

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c 

exec: main.o Power.o basicMath.o myMath.h
	$(CC) main.o Power.o basicMath.o myMath.h -o exec

clean:
	rm -f *.o *.a *.so