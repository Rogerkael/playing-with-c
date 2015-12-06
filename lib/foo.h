#ifndef FOO_H
#define FOO_H

typedef struct  {
    char* data;
    int x,y;
} lib_foo;

lib_foo* foo_new(char*, int, int);

char* foo_str(lib_foo*);

#endif
