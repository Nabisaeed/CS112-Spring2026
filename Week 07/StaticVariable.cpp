#include <iostream>
using namespace std;

class Car {
private:
    static int count; 

    int carModel;


public:
   
    Car() {
        count++;   
    }

   
    static void showCount() {
        cout << "Total Cars Created: " << count << endl;

        // cout<<"The car's model is "<<carModel<<endl;
    }
};


int Car::count;

int main() {
    Car c1;
    Car c2;
    Car c3;

Car::showCount();   

    return 0;
}