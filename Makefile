# Makefile

main: main.o register.o db.o login.o
	gcc main.o db.o login.o register.o -o main

main.o: src/main.c
	gcc -c src/main.c

db.o: src/db/db.c src/lib/userstruct.h
	gcc -c src/db/db.c

register.o: src/lib/register.c src/db/db.c src/db/db.h src/lib/userstruct.h
	gcc -c src/lib/register.c

login.o: src/lib/login.c src/db/db.c src/db/db.h src/lib/userstruct.h
	gcc -c src/lib/login.c

clean:
	rm -f *.o main && echo "" > users.dat && echo "" > products.dat && cp src/db/users.dat ./users.dat
