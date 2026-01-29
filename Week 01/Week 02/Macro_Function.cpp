#include <iostream>
using namespace std;

// Macro definition for square; evaluates ((x)*(x))
#ifndef SQAURE
#define SQAURE(x) ((x)*(x))
#endif

int main() {
    int a = 5, b = 6;

    cout << "The square of (a+b) : " << SQAURE(a + b) << endl
         // Predefined macro showing current line number
         << "This is line number : " << __LINE__ << endl
         // Predefined macro showing compilation time
         << "This is compilation time : " << __TIME__ << endl
         // Predefined macro showing current file name
         << "This is file name : " << __FILE__ << endl;

    return 0;
}
