/*

demo: main.o f1.o
	gcc -o demo main.c f1.c

main.o: main.c f1.h
	gcc -c main.c

f1.o: f1.c f2.h
	gcc -c f1.c

f2.o: f2.c f2.h
	gcc -c f2.c

*/