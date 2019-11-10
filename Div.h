#ifndef ___DIV_H___
#define ___DIV_H___

#include "Operator.h"

class Div : public operate {
    public:
        Div(Base* a, Base* b) : operate(a,b) {};

        double evaluate() {
            return left -> evaluate() / right -> evaluate();
        };
};

#endif //___DIV_H___