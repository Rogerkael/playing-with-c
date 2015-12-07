#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "lib/foo.h"
#include "lib/shapes.h"


int rand_int()
{
    int r = rand();
    r = r % (1 << 8);
    return ( r > 0 ? r : -r );
}

int main()
{
    srand(time(0));
    square* s = square_new(rand_int());
    printf("Square area of side %d = %d\n", s->width, square_area(s));
    rectangle* r = rectangle_new(rand_int(), rand_int());
    printf("Rectangle area of width %d and height %d = %d\n", r->width, r->height, rectangle_area(r));
    triangle* t = triangle_new(rand_int(), rand_int());
    printf("Triangle area of base %d and height %d = %d\n", t->base, t->height, triangle_area(t));
    free(t);
    free(r);
    free(s);
    return 0;
}
