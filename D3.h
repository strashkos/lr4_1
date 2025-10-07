#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
protected:
    int d3_number;
    double d3_double;
public:
    D3(char c1, int n1, float f1, string s1, double d1,
        char c2, int n2, float f2, string s2, string txt, int num, double dbl);
    ~D3();
};
