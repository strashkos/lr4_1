#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2 {
protected:
    int d2_value;
public:
    D2(int x1, int x2, int x3);
    ~D2();
};
