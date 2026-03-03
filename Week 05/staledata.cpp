#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
    double area;


    void calculateArea() {
        area = length * width;
    }
};

int main() {
    Rectangle rect;


    rect.length = 5;
    rect.width = 10;


    rect.calculateArea();
    cout << "Initial Area: " << rect.area << endl;  


    rect.length = 7;
    rect.width = 12;

    
    cout << "Area after changing length and width: " << rect.area << endl; 

    return 0;
}