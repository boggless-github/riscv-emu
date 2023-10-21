#include <component.hpp>
#include <register.hpp>

class ALU{
    public:
    enum OPS{
        ADD,
        SUB,
        MULT,
        DIV,
        XOR,
        OR,
        AND,
        CMP
    } op;

    Register *a, *b, *c;
    Register HI, LO;

    void SetOp(OPS op) { 
        this->op = op;
    }

    void SetRegA(Register *a) { 
        this->a = a;
    }

    void SetRegB(Register *b) { 
        this->b = b;
    }

    void SetRegC(Register *c) { 
        this->c = c;
    }

    void DoOp(){

    }
};