#include <stdlib.h>
#include <stdio.h>
#include "foo.h"

lib_foo* foo_new(char* data, int x, int y)
{
    lib_foo* ptr = malloc(sizeof(lib_foo));
    ptr->data = data;
    ptr->x = x;
    ptr->y = y;
    return ptr;
}

char* foo_str(lib_foo* f)
{
    char* r = (char*) malloc(50);
    sprintf(r, "%s : <%d, %d>",f->data, f->x, f->y);
    return r;
}
