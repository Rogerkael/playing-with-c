#include "../shapes.h"


square* square_new(int w)
{
    square* r = malloc(sizeof(square));
    r->width = w;
    return r;
}


int square_area(square* s)
{
    return s->width * s->width;
}
