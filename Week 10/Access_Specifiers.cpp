#include <iostream>
using namespace std;

class Parent{

    private:

    int x;

    public:

    Parent(int x){

        (*this).x=x;


    }



};

class Child: public Parent{

    public:

    Child(int x):Parent(x){}

    void show(){

        cout<<"The value of x is "<<x<<endl;
    }



};

int main() {


    Child c1(100);

    // cout<<c1.x<<endl; 
    
    return 0;
}