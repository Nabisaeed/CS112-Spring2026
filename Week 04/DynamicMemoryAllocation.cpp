#include <iostream>
using namespace std;

int main() {

    // int *ptr= new int(10);

    // delete ptr;

    // cout<<*ptr<<endl;

    int *ptr= new int[100000000];

    ptr[5000000]=100;

    cout<<ptr[5000000]<<endl;

    delete []ptr;

    // cout<<sizeof(ptr)<<endl;
    return 0;
}