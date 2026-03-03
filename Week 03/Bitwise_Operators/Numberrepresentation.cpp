#include <iostream>
using namespace std;

void PrintNumberBinary(int n){

    for(int i=3; i>=0; i--){

        cout<<((n>>i)&1)<<" ";
    }

    cout<<endl;
}

int main() {

    int a=5; // 0 1 0 1 

    PrintNumberBinary(a);
    
    return 0;
}