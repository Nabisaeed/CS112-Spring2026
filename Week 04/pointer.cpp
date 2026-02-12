#include <iostream>
using namespace std;

int main() {

    int a=10, b=20;

    int &c=a;

    c=b;

    int *ptr;

    cout<<c<<endl;

    // cout<<&a<<endl;
    
    return 0;
}