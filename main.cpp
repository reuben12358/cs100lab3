#include <iostream>
#include "base.h"
#include "Operator.h"
#include "Op.h"
#include "UnaryOperator.h"
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"
#include "Container.h"
#include "VectorContainer.h"
#include "ListContainer.h"
#include "Sort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "ceil.h"
#include "floor.h"
#include "abs.h"

using namespace std;

int main() {
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Mult* A = new Mult(op7, op4);
        cout << A -> evaluate() << endl;
    Add* B = new Add(op3, A);
        cout << B -> evaluate() << endl;
    Sub* C = new Sub(B, op2);
        cout << C -> evaluate() << endl;
    Sqr* D = new Sqr(C);
        cout << D -> evaluate() << endl;

    ListContainer* container = new ListContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);

    cout << "Container Before Sort: " << endl;
    container->print();
    cout << container -> size() << "\n";

    cout << "the value at 3 is " << container -> at(3) -> evaluate() << "\n";
    cout << "swap works? ";
    container -> swap(0,2);
    cout << container -> at(0) -> evaluate() << "\n";
    cout << container -> at(2) -> evaluate() << "\n"; 

    cout << "Container After Sort: " << endl;
    container->set_sort_function(new BubbleSort());
    container->sort();
    container->print();

    return 0;
};

//test ceil floor and abs

/* 
TEST(A,B) {
    Op* op1 = new Op(8.2);
    Op* op2 = new Op(2);
    
    Add* A = new Add(op1,op2);
    Sub* B = new Sub(op1,op2);
    Mult* C = new Mult(op1,op2);
    Div* D = new Div(op1,op2);

    ListContainer* container = new ListContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);

    container->set_sort_function(new SelectionSort());
    container->sort();

    EXPECT_EQ(4, container->at(0)->evaluate());
    EXPECT_EQ(6, container->at(1)->evaluate());
    EXPECT_EQ(10, container->at(2)->evaluate());
    EXPECT_EQ(16, container->at(3)->evaluate());
}

TEST(X,Y) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    
    Add* A = new Add(op1,op2);
    Sub* B = new Sub(op1,op2);
    Mult* C = new Mult(op1,op2);
    Div* D = new Div(op1,op2);

    VectorContainer* container = new VectorContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);

    container->set_sort_function(new BubbleSort());
    container->sort();

    EXPECT_EQ(4, container->at(0)->evaluate());
    EXPECT_EQ(6, container->at(1)->evaluate());
    EXPECT_EQ(10, container->at(2)->evaluate());
    EXPECT_EQ(16, container->at(3)->evaluate());
}
*/