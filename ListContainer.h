#ifndef ___LISTCONTAINER_H__
#define ___LISTCONTAINER_H__

#include "Sort.h"
#include <iostream>
#include <list>
#include "base.h"
#include "Container.h"
#include <cstring>

using namespace std;

class ListContainer : public Container {
    private:
        list <Base*> l;

    public:
        ListContainer() : Container() {};
        ListContainer(Sort* s) : Container(s) {}; 

        void add_element(Base* element) {
            l.push_back(element);
        };

        void print() {
            list <Base*> p = l;
            for (; !p.empty(); p.pop_front()) {
                cout << p.front() -> evaluate() << endl;
            }
        };

        Base* at(int i) {
            list <Base*> p = l;
            for (int j = 0; j < i; ++j) {
                p.pop_front();
            }
            return p.front();
        };

        int size() {
            int i = 0;
            list <Base*> p = l;
            for (; !p.empty(); p.pop_front()) {
                i++;
            }
            return i;
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
            if (i == j)
                return;

            list<Base*>::iterator iti = l.begin();
            list<Base*>::iterator itj = l.begin();
            

            for (int a = 0; a < i; ++a) {
                ++iti;
            }

            for (int a = 0; a < j; ++a) {
                ++itj;
            }

            Base* temp = *iti;
            *iti = *itj;
            *itj = temp;

            // list <Base*> p = l;
            // list <Base*> q = l;
            // list <Base*> li = l;
            
            // for (int a = 0; a < i; ++a) {
            //     p.pop_front();
            // }

            // for (int a = 0; a < j; ++a) {
            //     q.pop_front();
            // }

            // int r = 0;

            // for (list<Base*>::iterator it = l.begin(); it != l.end(); ++it) {
            //     ++r;
            // }

            // for (int a = 0; a < r; ++a) {
            //     if (a == i) {
            //         l.push_back(q.front());
            //         li.pop_front();    
            //     }

            //     else if (a == j) {
            //         l.push_back(p.front());
            //         li.pop_front();
            //     }

            //     else {
            //         l.push_back(li.front());
            //     }
                
            //     l.pop_front();
            // }
        };
};

#endif //___LISTCONTAINER_H__