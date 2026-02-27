#include <iostream>
using namespace std;

class Demo {
private:
    int num;
    string name;

public:
    
    Demo(int n, string s) {
        num = n;
        name = s;
        cout << "Number: " << num << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    
    Demo obj1(10, "Ali");

    return 0;
}