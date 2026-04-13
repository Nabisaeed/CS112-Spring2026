#include <iostream>
using namespace std;

class P{

    public:

    P(){

        cout<<"This is the default constructor "<<endl;
    }

    void show(){

        cout<<"This is show function of PPPPPP"<<endl;
    }



};

class  A: virtual public  P{

    public:

     A(){

        cout<<"This is the constructor of AA"<<endl;
    }





};

class B:virtual public  P{

    public:

    B(){

        cout<<"This is the constructor of BB"<<endl;
    }

 


};

class C: public B, public A{




};

int main() {

    C c1;

    c1.show();
    
    return 0;
}