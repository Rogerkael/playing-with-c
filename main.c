#include <stdlib.h>
#include <stdio.h>
#include "lib/foo.h"

typedef struct  {
    int x, y;
} foo;

char* foo_str(foo* f)
{
    char *r;
    r = (char*) malloc(10);
    sprintf(r, "< %d, %d >", f->x, f->y);
    return r;
}
foo* foo_new(int a, int b)
{
    foo* f = malloc(sizeof(foo));
    f->x = a;
    f->y = b;
    return f;
}
int main()
{
    foo*a = foo_new(23, 34);
    puts(foo_str(a));
    puts("Hello World!");
    lib_foo* n = foo_create("Roger Rodriguez Texido");
    puts(foo_repr(n));
}
