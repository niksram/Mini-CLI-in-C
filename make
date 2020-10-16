a.out:interface.o functions.o
	gcc interface.o functions.o
interface.o:interface.c headers.h
	gcc -c interface.c
functions.o:functions.c headers.h
	gcc -c functions.c