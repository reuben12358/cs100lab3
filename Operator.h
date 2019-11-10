#ifndef ____OPERATOR_H__
#define ____OPERATOR_H__

#include "base.h"

class operate : public Base {
    protected:
        Base* left;
        Base* right;

    public: 
        operate(Base* a, Base* b) : left(a), right(b) {};

        virtual double evaluate() = 0;   
};

#endif //____OPERATOR_H__