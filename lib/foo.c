#include <stdlib.h>
#include "foo.h"

lib_foo* foo_create(char* data)
{
    lib_foo* ptr = malloc(sizeof(lib_foo));
    ptr->data = data;
    return ptr;
}

char* foo_repr(lib_foo* f)
{
    return f->data;
}
