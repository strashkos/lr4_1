#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(int x1, int x2, int x3, int x4, int x5)
    : D1(x1, x2, x3), D2(x1, x2, x4) {
    d3_value = x5;
    cout << "Constructor D3, values: "
        << "b1_value = " << x1
        << ", b2_value = " << x2
        << ", d1_value = " << x3
        << ", d2_value = " << x4
        << ", d3_value = " << d3_value << endl;
}

D3::~D3() {
    cout << "Destructor D3" << endl;
}
