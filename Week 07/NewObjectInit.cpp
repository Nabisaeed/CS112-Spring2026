#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) : x(a) {}
    
    // Copy Constructor
    Demo(const Demo& obj) {
        x = obj.x;
        cout << "Copy Constructor Called\n";
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;   // Copy constructor called here
    return 0;
}