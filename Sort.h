#ifndef ___SORT_H__
#define ___SORT_H__

#include "base.h"
#include "Container.h"

using namespace std;

class Container;

class Sort {
	public:
        /* Constructors */
		Sort() {};

        /* Pure Virtual Functions */
		virtual void sort(Container* container) = 0;
};

#endif //___SORT_H__