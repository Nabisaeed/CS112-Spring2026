#include <iostream>
using namespace std;

class Print {
public:
   void show(double x) {
        cout << "Double: " << x << endl;
    }    

void show(float x) {
        cout << "Integer: " << x << endl;
    }

 

    void show(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Print obj;
    obj.show(3.3);
    obj.show(3.14);
    obj.show("Hello");
}