#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    
    Number operator+(Number n) {
        Number temp;
        temp.value = this->value + n.value;
        return temp;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(5), n2(7);

    Number n3 = n1 + n2;   

    n3.display();

    return 0;
}