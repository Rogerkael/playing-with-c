#include <stdlib.h>

#ifndef SHAPES_H
#define SHAPES_H

typedef struct {
    int width;
} square;

square* square_new(int);
int square_area(square*);

typedef struct {
    int width, height;
} rectangle;

rectangle* rectangle_new(int, int);
int rectangle_area(rectangle*);


typedef struct {
    int base, height;
} triangle;

triangle* triangle_new(int,int);

int triangle_area();

#endif
