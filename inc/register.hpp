#include <component.hpp>
class Register : Component{
        uword data;

        uword control_lines;
        public:
        
        Register(){
            Reset();
        }

        virtual ~Register(){

        }

        virtual Register operator=(uword data){
            this->data = data;
            return *this;
        }

        virtual Register operator=(const Register& other){
            this->data = other.data;
            return *this;
        }

        virtual uword Read() const { 
            return data;
        }

        virtual void Write(uword data) { 
            *this = data;
        }

        virtual void Tick() {

        }
        virtual void Reset(){
            data = 0;
        }

    };