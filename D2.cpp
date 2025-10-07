#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(int x1, int x2, int x3) : B1(x1), B2(x2) {
    d2_value = x3;
    cout << "Constructor D2, values: b1_value = " << x1
        << ", b2_value = " << x2
        << ", d2_value = " << d2_value << endl;
}

D2::~D2() {
    cout << "Destructor D2" << endl;
}
