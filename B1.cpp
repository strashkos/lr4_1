#include "B1.h"
#include <iostream>
using namespace std;

B1::B1(char c, int n) {
    b1_char = c;
    b1_int = n;
    cout << "Constructor B1 -> char: " << b1_char << ", int: " << b1_int << endl;
}

B1::~B1() {
    cout << "Destructor B1" << endl;
}
