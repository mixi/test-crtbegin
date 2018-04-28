#include <stdint.h>
#include <stdlib.h>

struct A {
    A() {
        v = (uint32_t*) malloc(sizeof(uint32_t));
        if(v)
            *v = 123;
    }
    ~A() {
        free(v);
    }

    uint32_t *v;
};

A a;

extern "C" {
    uint32_t get() {
        return *a.v;
    }
}
