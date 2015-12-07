all:
	clear;
	gcc lib/foo.c lib/shapes/square.c lib/shapes/rectangle.c lib/shapes/triangle.c main.c -o main; ./main
