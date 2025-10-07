#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(int x1, int x2, int x3) : B1(x1), B2(x2) {
    d1_value = x3;
    cout << "Constructor D1, values: b1_value = " << x1
        << ", b2_value = " << x2
        << ", d1_value = " << d1_value << endl;
}

D1::~D1() {
    cout << "Destructor D1" << endl;
}
