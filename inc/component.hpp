#include <riscv_common.hpp>

class Component {
    public:
    Component();
    virtual ~Component();
    virtual void Tick() = 0;
    virtual void Reset() = 0;
};
