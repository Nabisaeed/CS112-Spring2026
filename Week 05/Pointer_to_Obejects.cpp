#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    void setBrand(string b) {
        brand = b;
    }

    void setYear(int y) {
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;

    Car* ptr = &c1;

    ptr->setBrand("BMW");
    ptr->setYear(2023);

    ptr->display();

    return 0;
}
