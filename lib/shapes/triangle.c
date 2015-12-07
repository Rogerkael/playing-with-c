#include "../shapes.h"

triangle* triangle_new(int b, int h)
{
    triangle* r = malloc(sizeof(triangle));
    r->base = b;
    r->height = h;
    return r;
}


int triangle_area(triangle* t)
{
    return ( t->base * t->height ) / 2;
}
