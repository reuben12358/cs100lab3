#ifndef ____ADD_H__
#define ____ADD_H__

#include "Operator.h"

class Add : public operate {
    public:
        Add(Base* a, Base* b) : operate(a,b) {};

        double evaluate() {
            return left -> evaluate() + right -> evaluate();
        };
};

#endif //____ADD_H__