#include <iostream>
using namespace std;

class Shape {
public:
    virtual void sayHi() {
        cout << "Just hi!\n";
    }
};

class Triangle : public Shape {
public:
    void sayHi() {
        cout << "Hi from a triangle!\n";
    }
};

class Rectangle : public Shape {
public:
    void sayHi() {
        cout << "Hi from a rectangle!\n";
    }
};

int main() {
    Shape *p;
    int which;

    cout << "1 -- shape, 2 -- triangle, 3 -- rectangle\n";
    cin >> which;

    switch (which) {
        case 1: p = new Shape; break;
        case 2: p = new Triangle; break;
        case 3: p = new Rectangle; break;
        default: return 0;
    }

    p->sayHi();
    delete p;

    return 0;
}