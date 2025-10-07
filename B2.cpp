#include "B2.h"
#include <iostream>
using namespace std;

B2::B2(float f, string s) {
    b2_float = f;
    b2_str = s;
    cout << "Constructor B2 -> float: " << b2_float << ", string: " << b2_str << endl;
}

B2::~B2() {
    cout << "Destructor B2" << endl;
}
