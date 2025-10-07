#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2 {
protected:
    string d2_text;
public:
    D2(char c, int n, float f, string s, string txt);
    ~D2();
};
