#include <iostream>
using namespace std;

class Number {
    

public:

int value;
    Number(int v = 0) {
        value = v;
    }

    


    void display() {
        cout << "Value = " << value << endl;
    }
};

    Number operator+(Number n, Number n1) {
        Number temp;
        temp.value = n.value + n1.value;
        return temp;
    }

int main() {
    Number n1(5), n2(7), n3(20);

    n3 = n1 + n2;   

    n3.display();

    return 0;
}