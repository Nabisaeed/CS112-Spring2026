#include <iostream>
using namespace std;

class Student {
public:
    string name;        

    void greet() {      
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ali";
    s1.greet();

    return 0;
}
