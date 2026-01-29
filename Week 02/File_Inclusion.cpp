#include <iostream>
#include "Calculator.cpp"   // Includes function definitions for calculator operations
using namespace std;

int main() {
    // Demonstrates usage of calculator functions
    cout << "The addition of two numbers is : " << add(5, 10) << endl;
    cout << "The subtraction of two numbers is : " << sub(25, 10) << endl;
    cout << "The multiplication of two numbers is : " << mul(5, 10) << endl;

    return 0;
}
