#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
protected:
    int d3_value;
public:
    D3(int x1, int x2, int x3, int x4, int x5);
    ~D3();
};
