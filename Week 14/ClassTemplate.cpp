#include <iostream>
using namespace std;

template <typename T>


class Box{

    T data;

    public:
    Box(T data): data(data) {}

    void display(){

        cout<<"The data is :"<<data<<endl;
    }

};

int main() {

    Box<int> b1(10);

    Box <string> b2("Aoun");

    b2.display();
    
    return 0;
}