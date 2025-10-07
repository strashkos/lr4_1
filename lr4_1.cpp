#include "D3.h"
#include <iostream>
using namespace std;

int main() {
    char b1_c, b2_c;
    int b1_i, b2_i;
    float b2_f1, b2_f2;
    string b2_s1, b2_s2, txt;
    double d1_d, d3_d;
    int d3_n;

    cout << "Enter data for first B1 and B2 (for D1):\n";
    cout << "B1 char: "; cin >> b1_c;
    cout << "B1 int: "; cin >> b1_i;
    cout << "B2 float: "; cin >> b2_f1;
    cout << "B2 string: "; cin >> b2_s1;
    cout << "D1 double: "; cin >> d1_d;

    cout << "\nEnter data for second B1 and B2 (for D2):\n";
    cout << "B1 char: "; cin >> b2_c;
    cout << "B1 int: "; cin >> b2_i;
    cout << "B2 float: "; cin >> b2_f2;
    cout << "B2 string: "; cin >> b2_s2;
    cout << "D2 text: "; cin >> txt;

    cout << "\nEnter D3 values (int, double): ";
    cin >> d3_n >> d3_d;

    cout << "\n=== Object creation ===" << endl;
    D3 obj(b1_c, b1_i, b2_f1, b2_s1, d1_d,
        b2_c, b2_i, b2_f2, b2_s2, txt, d3_n, d3_d);

    cout << "\nClass D1 (inherits from private B1, public B2)" << endl;
    cout << "Class D2 (inherits from public B1, private B2)" << endl;
    cout << "Class D3 (inherits from private D1, public D2)" << endl;

    cout << "\n=== Object destruction ===" << endl;
    return 0;
}
