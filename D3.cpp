#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(char c1, int n1, float f1, string s1, double d1,
    char c2, int n2, float f2, string s2, string txt, int num, double dbl)
    : D1(c1, n1, f1, s1, d1), D2(c2, n2, f2, s2, txt) {
    d3_number = num;
    d3_double = dbl;
    cout << "Constructor D3 -> int: " << d3_number << ", double: " << d3_double << endl;
}

D3::~D3() {
    cout << "Destructor D3" << endl;
}
