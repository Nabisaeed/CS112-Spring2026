#include <iostream>
using namespace std;

void PrintNum(int n){
    // Base case: stop recursion when n reaches 0
    if(n == 0){
        return;
    }

    // Recursive call happens before printing to get ascending order
    PrintNum(n - 1);

    cout << n << " ";
}

int main() {
    // Prints numbers from 1 to 5
    PrintNum(5);
    cout << endl;

    return 0;
}
