#include "B1.h"
#include <iostream>
using namespace std;

B1::B1(int x) {
    b1_value = x;
    cout << "Constructor B1, value b1_value = " << b1_value << endl;
}

B1::~B1() {
    cout << "Destructor B1" << endl;
}
