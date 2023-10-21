#include <register.hpp>
#include <alu.hpp>
#include <cache.hpp>

class Hart{
    /* TODO: need queue structure for instructions to run on clock*/
    public:
    Hart() {
        created = false;
        privilege = MACHINE;
        sp.Write(0);
        ra.Write(0);
    }

    void create(uword hart_id){
        if (created) return;
        this->hart_id = hart_id;
        created = true;
        /* TODO: start clock */
    }

    void tick(){

    };
    
    enum Privilege{
        USER_APP    = 0,
        SUPERVISOR  = 1,
        RESERVED    = 2,
        MACHINE     = 3
    };
    
    private: 
    /* emulator values */
    bool created = false;

    /* actual hart values*/
    ALU alu;
    uword hart_id;

    Cache l1, l2;

    Privilege privilege;

    Register ip; /* instruction pointer*/
    Register sp; /* stack pointer*/
    Register ra; /* return address */
    Register gp_reg[32];

    uint8_t rd : 5;
    uint8_t rs1 : 5;
    uint8_t rs2 : 5;
    uint8_t opcode : 7;
    uint8_t funct3 : 3;
    uint8_t funct7 : 7;
    uint32_t imm;

    enum I_TYPE {
        R, I, S, SB, U, UJ
    };

    I_TYPE get_type(uint32-t)
};
