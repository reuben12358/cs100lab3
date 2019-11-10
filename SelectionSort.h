#ifndef ___SELECTIONSORT_H__
#define ___SELECTIONSORT_H__

#include "Sort.h"
#include "Container.h"

class SelectionSort : public Sort {
    public:
        SelectionSort() : Sort() {};

        void sort (Container* container) {
            for (int i = 0; i < container -> size() - 1; ++i) {
                int min = i;
                for (int j = i + 1; j < container -> size(); ++j) {
                    if (container -> at(j) -> evaluate() < container -> at(min) -> evaluate())
                        min = j;
                }
                if (min != i) 
                    container -> swap(i, min);
            }
        };
};

#endif //___SELECTIONSORT_H__