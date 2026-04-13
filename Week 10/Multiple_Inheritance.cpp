#include <iostream>
using namespace std;

class A{

    public:

    void show(){

        cout<<"This is show function of A"<<endl;
    }



};

class  B{

    public:


     void show(){

        cout<<"This is show function of B"<<endl;
    }




};

class C: public A, public B{



};

int main() {

    C c1;

    c1.A::show(); // Compiler needs the class's name as well. 
    
    return 0;
}