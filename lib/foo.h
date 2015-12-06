#ifndef FOO_H
#define FOO_H

typedef struct  {
    char* data;
} lib_foo;

lib_foo* foo_create(char*);

char* foo_repr(lib_foo*);

#endif
