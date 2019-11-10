#ifndef _____SUB_H___
#define _____SUB_H___

#include "Operator.h"

class Sub : public operate {
    public:
        Sub(Base* a, Base* b) : operate(a,b) {};

        double evaluate() {
            return left -> evaluate() - right -> evaluate();
        };
};

#endif //_____SUB_H___