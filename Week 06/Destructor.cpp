#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }

    
};

int main() {
    cout << "Inside main function" << endl;
    Demo obj, obj2;  
    cout << "Still inside main" << endl;
    
    return 0;
}