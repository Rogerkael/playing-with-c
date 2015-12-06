#include <stdlib.h>
#include <stdio.h>
#include "lib/foo.h"

int main()
{
    lib_foo* p = foo_new("Roger", 1, 2);
    puts(foo_str(p));
    free(p);
    return 0;
}
