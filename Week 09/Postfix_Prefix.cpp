#include <iostream>
using namespace std;

class Inventory{

    int Quantity;

    public:

    Inventory(int Quantity=0){

        this->Quantity=Quantity;

    }


    void display(){


        cout<<Quantity<<endl;
    }

    Inventory operator++(){

        ++Quantity;

        return *this;

    }


      Inventory operator++(int){

        Inventory temp=*this;

        Quantity++;

        return temp;

    }





};

int main() {

    Inventory i1(5);


    Inventory i2=i1++;


    i2.display();
    
    return 0;
}