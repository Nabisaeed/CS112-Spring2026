#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
   
    Rectangle(double len = 0, double wid = 0) {
        length = len;
        width = wid;
        cout << "Constructor with default arguments called. Length = " 
             << length << ", Width = " << width << endl;
    }


    // Rectangle(double len) {
    //     length = len;
    //     width = 0;
    //     cout << "One-parameter constructor called. Length = " 
    //          << length << ", Width = " << width << endl;
    // }

    
    // Rectangle(double len, double wid) {
    //     length = len;
    //     width = wid;
    //     cout << "Two-parameter constructor called. Length = " 
    //          << length << ", Width = " << width << endl;
    // }
    
};

int main() {
    Rectangle r1;        
    Rectangle r2(5.5);     
    Rectangle r3(10,20); 

    return 0;
}