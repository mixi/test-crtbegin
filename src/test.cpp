#include <sys/types.h>

#include <iostream>

extern "C" {
    uint32_t get() {
        uint32_t r;
        std::cin >> r;
        return r;
    }
}
