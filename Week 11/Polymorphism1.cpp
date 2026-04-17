#include <iostream>
using namespace std;


class Shape{

    public:

    void Drawing(){

        cout<<"Drawing Shape"<<endl;
    }



};

class Circle: public Shape{

    public:

    void Drawing(){
        cout<<"Drawing Circle"<<endl;
    }



};

class Rectangle: public Shape{

    public:

    void Drawing(){
        cout<<"Drawing Rectangle"<<endl;
    }



};

class Square: public Shape{

    public:

    void Drawing(){
        cout<<"Drawing Sqaure"<<endl;
    }

};

int main() {


    Rectangle c1;
    c1.Drawing();

    Shape s1= Circle();
    Shape s2= Square();
    Shape s3= Rectangle();

    s1.Drawing();
    
    return 0;
}