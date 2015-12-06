#include <stdlib.h>
#include <stdio.h>
#include "lib/foo.h"
#include "lib/shapes.h"

int main()
{
    /*lib_foo* p = foo_new("Roger", 1, 2);*/
    /*puts(foo_str(p));*/
    /*free(p);*/
    square* s = square_new(3);
    printf("%d\n", square_area(s));
    rectangle* r = rectangle_new(3, 5);
    printf("%d\n", rectangle_area(r));
    free(r);
    free(s);
    return 0;
}
