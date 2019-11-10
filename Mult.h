#ifndef _____MULT_H___
#define _____MULT_H___

#include "Operator.h"

class Mult : public operate {
    public:
        Mult(Base* a, Base* b) : operate(a,b) {};

        double evaluate() {
            return left -> evaluate() * right -> evaluate();
        };
};

#endif // !_____MULT_H___