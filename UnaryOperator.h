#ifndef ____UNARYOPERATOR_H___
#define ____UNARYOPERATOR_H___

#include "base.h"

class unaryoperator : public Base {
    protected:
        Base* number;

    public:
        unaryoperator(Base* a) : number(a) {};

        virtual double evaluate() = 0;
};

#endif //____UNARYOPERATOR_H___