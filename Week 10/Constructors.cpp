#include <iostream>
using namespace std;

class Parent{

    public:

    Parent(){

        cout<<"This is parent's Constructor "<<endl;
    }

    ~Parent(){

        cout<<"This is parent's Destructor "<<endl;
    }




};


class Child:public Parent{

    public:

    Child(){

        cout<<"This is Child's Constructor "<<endl;
    }

    ~Child(){

        cout<<"This is Child's Destructor "<<endl;
    }




};


class GrandChild: public Child{

    public:

    GrandChild(){

        cout<<"This is GrandChild's Constructor "<<endl;
    }

    ~GrandChild(){

        cout<<"This is GrandChild's Destructor "<<endl;
    }




};



int main() {

    GrandChild g1;
    
    return 0;
}