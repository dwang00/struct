all: functions.o main.o
	gcc -o program functions.o main.o

main.o: main.c headers.h
	gcc -c main.c headers.h

functions.o: functions.c headers.h
	gcc -c functions.c

run:
	.\program

clean:
	del *.o
	del *.gch
	del *.exe
