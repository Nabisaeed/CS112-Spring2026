#include <iostream>
using namespace std;

int fact(int n){
    // Base cases to stop recursion
    if(n == 0 || n == 1){
        return 1;
    }

    // Recursive factorial calculation
    return n * fact(n - 1);
}

int main() {
    // Calculates and prints factorial of 5
    cout << fact(5) << endl;

    return 0;
}
