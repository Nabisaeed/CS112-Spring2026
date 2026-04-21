#include <iostream>
using namespace std;

class Product{

    public:

    Product(){

        cout<<"Product's Constructor"<<endl;
    }

    ~Product(){

        cout<<"Product's Destrutor"<<endl;
    }



};


class DigitalProduct: public Product{

    public:

    DigitalProduct(){

        cout<<"DigitalProduct's Constructor"<<endl;
    }

      ~DigitalProduct(){

        cout<<"DigitalProduct's Destructor"<<endl;
    }



};

int main() {

    Product *p;

    p= new DigitalProduct();

    delete p;
    
    return 0;
}