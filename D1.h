#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
protected:
    double d1_double;
public:
    D1(char c, int n, float f, string s, double d);
    ~D1();
};
