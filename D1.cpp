#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(char c, int n, float f, string s, double d) : B1(c, n), B2(f, s) {
    d1_double = d;
    cout << "Constructor D1 -> double: " << d1_double << endl;
}

D1::~D1() {
    cout << "Destructor D1" << endl;
}
