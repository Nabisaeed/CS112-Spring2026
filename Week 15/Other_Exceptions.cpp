#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void testOutOfRange() {
    cout << "--- out_of_range ---" << endl;
    try {
        string s = "GIKI";
        cout << "s.at(0) = " << s.at(0) << endl;
        cout << "s.at(99) = " << s.at(99) << endl;
    }
    catch (out_of_range& e) {
        cout << " out_of_range → " << e.what() << endl;
    }
}

void testLengthError() {
    cout << "\n--- length_error ---" << endl;
    try {
        string s = "Hello";
        cout << "Max size: " << s.max_size() << endl;
        s.resize(s.max_size() + 1);
    }
    catch (length_error& e) {
        cout << " length_error → " << e.what() << endl;
    }
}

void testBadAlloc() {
    cout << "\n--- bad_alloc ---" << endl;
    try {
        int* arr = new int[100];
        cout << " Small array allocated!" << endl;
        delete[] arr;

        int* big = new int[99999999999999999LL];
        cout << " Big array allocated!" << endl;
        delete[] big;
    }
    catch (bad_alloc& e) {
        cout << " bad_alloc → " << e.what() << endl;
    }
}

int main() {
    testOutOfRange();
    testLengthError();
    testBadAlloc();
    return 0;
}