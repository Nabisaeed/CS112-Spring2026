#include <iostream>
using namespace std;

void swap(int &a, int &b){

    int c=a;
    a=b;
    b=c;
}

void swap(float &a, float &b){

    float c=a;
    a=b;
    b=c;
}

void swap(string &a, string &b){

    string c=a;
    a=b;
    b=c;
}

int main() {

    string a="Ali", b="Sajid";

    swap(a,b);

    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}