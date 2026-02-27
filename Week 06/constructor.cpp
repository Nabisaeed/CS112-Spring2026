#include <iostream>
using namespace std;

class Demo {
public:
    
    Demo() {
        cout << "Welcome to the constructor !" << endl;
    }
};

int main() {
    Demo demo;
    return 0;
}