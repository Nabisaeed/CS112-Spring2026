#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    
    Demo() {
        num = 0;   
        cout << "Default Constructor Called!" << endl;
        cout << "Number: " << num << endl;
    }
};

int main() {
    Demo obj1;   
    return 0;
}