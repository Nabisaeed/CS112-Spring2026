#include <iostream>
#include <stdexcept>
using namespace std;

void divideIfElse(int a, int b) {
    if (b == 0) {
        cout << " Cannot divide by zero!" << endl;
        return;
    }
    cout << " Result = " << a / b << endl;
}

void divideException(int a, int b) {
    try {
        if (b == 0) throw 0;
        cout << " Result = " << a / b << endl;
    }
    catch (int a ) {
        cout << " Division by zero caught!" << a<<endl;
    }
}

void allocateMemory(long long size) {
    try {
        int* arr = new int[size];
        cout << " Memory allocated!" << endl;
        delete[] arr;
    }
    catch (bad_alloc& e) {
        cout << " Memory failed: " << e.what() << endl;
    }
}

int main() {

    // cout << "--- if-else approach ---" << endl;
    // divideIfElse(10, 2);
    // divideIfElse(10, 0);

    // cout << "\n--- Exception approach ---" << endl;
    // divideException(17, 8);
    // divideException(17, 0);

    // cout << "\n--- Unpredictable runtime error ---" << endl;
    allocateMemory(100);
    allocateMemory(999999999999999LL);

    return 0;
}