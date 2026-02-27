#include <iostream>
using namespace std;

class Demo {
public:
    Demo()  { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};


Demo globalObj;

int main() {
    cout << "Inside main\n";

    

    cout << "End of main\n";
    return 0;
}