#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(char c, int n, float f, string s, string txt) : B1(c, n), B2(f, s) {
    d2_text = txt;
    cout << "Constructor D2 -> text: " << d2_text << endl;
}

D2::~D2() {
    cout << "Destructor D2" << endl;
}
