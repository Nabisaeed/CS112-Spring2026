#include <iostream>
using namespace std;

class Engine{

    private:

    int Horsepower;

    public:

    Engine(int hp): Horsepower(hp){

    }

    void start(){

        cout<<"The engine is starting with horsepwer :"<<Horsepower<<endl;
    }



};




class Car{

    private:

    Engine E1;

    public:

    Car(int hp): E1(hp){

    }

    void start(){

        cout<<"The car is starting "<<endl;

        E1.start();
    }




};

int main() {

    Car c1(100);

    c1.start();
    
    return 0;
}