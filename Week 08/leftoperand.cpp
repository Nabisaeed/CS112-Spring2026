#include <iostream>
using namespace std;

class Number {
public:
    int value;
    double v1;

    Number(int v = 0, double v2) { value = v, v1=v2; }
};

Number operator+(int a, Number b) {
    return Number(a + b.value);
}

int main() {
    Number n1(4), n2(6);

    Number n3 = 5 + n2;

    cout << n3.value << endl;
}