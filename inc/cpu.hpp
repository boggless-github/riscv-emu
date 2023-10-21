#include <hart.hpp>
#include <cache.hpp>

class CPU{
    Hart harts[NUM_HART];
    Cache l3;
};
