#include <iostream>
using namespace std;

template <typename T, typename T1>

void swap1(T &a, T1 &b){

    auto c=a;
    a=static_cast<T>(b);
    b=static_cast<T1>(c);
}

class Student{

    

    public:

    string name;

    Student(string name="Ali"): name(name){}


};


int main() {

    int a=100;

    float b=11.55;

    swap1(a,b);


    
    return 0;
}