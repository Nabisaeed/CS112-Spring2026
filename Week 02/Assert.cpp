#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int age = 5;

    // Ensures age is non-negative; program aborts if condition is false
    assert(age >= 0);

    cout << "Your age is valid" << endl;

    return 0;
}
