#include <iostream>
using namespace std;

class Vehicle{

    int speed;

    public:

    Vehicle(){

        speed=0;

        cout<<"Base class constructor is called "<<endl;
    }
void Setspeed(int speed){

    this->speed=speed;
}

int Getspeed(){

    return speed;
}

void start(){

    cout<<"The vehicle is starting"<<endl;

}

void stop(){

    cout<<"The vehicle is stopping"<<endl;
    
}


};


class Car: public Vehicle{

    public:

    Car(){

        cout<<"Child class constructor is called "<<endl;
    }

    void accelerate(){

        int Currentspeed= Getspeed();

        Setspeed(Getspeed()+1);

        cout<<"The speed of the car is "<<Getspeed();


    }

    


};

int main() {


    Car c1;

    c1.accelerate();
    c1.accelerate();
    c1.accelerate();
    
    return 0;
}