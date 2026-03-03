#include <iostream>
using namespace std;

class Rectangle {
    double length;
    double width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    double area() {
        return length * width;
    }

    
    Rectangle(Rectangle &obj) {
        length = obj.length;
        width = obj.width;   
        cout << "This is my copy constructor" << endl;
    }
};

int main() {
    Rectangle box1(10.0, 20.0);

    
    Rectangle box2=box1;

    cout << "\nBox2 details after copy:\n";
    box2.display();
    cout << "Area of Box2: " << box2.area() << endl;

    return 0;
}