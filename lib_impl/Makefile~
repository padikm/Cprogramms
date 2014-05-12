
objects = app.o sub.o add.o
app: clean $(objects) 
	gcc -o app $(objects)

sub.o:	
	gcc -c sub.c
app.o:	sub.h add.h 

add.o: 
	gcc -c add.c

clean:
	rm -rf app.o sub.o app.exe
