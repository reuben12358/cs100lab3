#ifndef __BUBBLESORT_H
#define __BUBBLESORT_H

#include "Sort.h"
#include "Container.h"

class BubbleSort : public Sort {
    public:
        BubbleSort() : Sort() {};

        void sort (Container* container) {
            for (int i = 0; i < container -> size(); ++i) {
                for (int j = 0; j < container -> size() - 1; ++j) {
                    if (container -> at(j) -> evaluate() > container -> at(j + 1) -> evaluate())
                        container -> swap(j, j + 1);
                }
            }
        };
};

#endif //__BUBBLESORT_H