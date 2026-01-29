#include <iostream>
using namespace std;

int Fib(int n){
    // Base cases to stop recursion
    if(n == 0 || n == 1){
        return n;
    }

    // Recursive Fibonacci calculation
    return Fib(n - 1) + Fib(n - 2);
}

int main() {
    int a = 12;  // Number of Fibonacci terms to print

    for(int i = 0; i < a; i++){
        // Prints Fibonacci sequence from Fib(0) to Fib(a-1)
        cout << Fib(i) << " ";
    }

    cout << endl;
    return 0;
}
