#ifndef ____VECTORCONTAINER_H___
#define ____VECTORCONTAINER_H___

#include "Sort.h"
#include <iostream>
#include "base.h"
#include "Container.h"
#include <cstring>
#include <vector>
// #include "SelectionSort.h"
// #include "BubbleSort.h"

using namespace std;

class VectorContainer : public Container {
    protected:
        vector <Base*> v;

    public:
        VectorContainer() : Container() {};
        VectorContainer(Sort* s) : Container(s) {}; 

        void add_element(Base* element) {
            v.push_back(element);
        };

        void print() {
            vector <Base*> p = v;
            for (int i = 0; i < v.size(); ++i) {
                cout << p[i] -> evaluate() << endl;
            }
        };

        Base* at(int i) {
           return v[i];
        };

        int size() {
            return v.size();
        };

        void sort() {
            if (sort_function == NULL) {
                throw "No sort specified\n";
                return;
            }

            sort_function -> sort(this);
            // insert sorting algorithm
        };

        void swap(int i, int j) {
            Base* temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        };
};

#endif //____VECTORCONTAINER_H___