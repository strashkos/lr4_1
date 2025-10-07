#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
protected:
    int d1_value;
public:
    D1(int x1, int x2, int x3);
    ~D1();
};
