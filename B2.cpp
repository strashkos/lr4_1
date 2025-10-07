#include "B2.h"
#include <iostream>
using namespace std;

B2::B2(int x) {
    b2_value = x;
    cout << "Constructor B2, value b2_value: " << b2_value << endl;
}

B2::~B2() {
    cout << "Destructor B2" << endl;
}
