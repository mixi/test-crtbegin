#include <sys/types.h>

#include <iostream>

struct A {
    A() {
        std::cin >> v;
    }

    uint32_t v;
};

A a;

extern "C" {
    uint32_t get() {
        return a.v;
    }
}
