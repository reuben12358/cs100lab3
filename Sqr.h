#ifndef ___SQR_H__
#define ___SQR_H__

#include "UnaryOperator.h"

class Sqr : public unaryoperator {
    public:
        Sqr(Base* a) : unaryoperator(a) {};

        double evaluate() {
            return number -> evaluate() * number -> evaluate(); 
        };
};

#endif //___SQR_H__