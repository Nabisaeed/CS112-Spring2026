#include <iostream>
using namespace std;

void PrintHello(int n){
    // Base case: stop recursion when n reaches 0
    if(n == 0){
        return;
    }

    // Print before recursive call to repeat in correct order
    cout << "Hello" << endl;

    PrintHello(n - 1);
}

int main() {
    // Prints "Hello" exactly 3 times
    PrintHello(3);

    return 0;
}
