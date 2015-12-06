#include "../shapes.h"


rectangle* rectangle_new(int w, int h)
{
    rectangle* r = malloc(sizeof(rectangle));
    r->width = w;
    r->height = h;
}

int rectangle_area(rectangle* r)
{
    return r->width * r->height;
}
