#include <iostream>
using namespace std;

class Item {
    double price;
    int quantity;

public:
    
    Item(double p) {
        price = p;
        quantity = 1;       
        cout << "Single-arg constructor: Price = " << price << ", Quantity = " << quantity << endl;
    }

    
    Item(double p, int q) {
        price = p;
        quantity = q;
        cout << "Two-arg constructor: Price = " << price << ", Quantity = " << quantity << endl;
    }

    void display() {
        cout << "Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item inventory[] = {

        Item(),
    
        20.5,               
        Item(8.75, 20),     
        45.0                
    };

    cout << "\nDisplaying all items:\n";
    for(int i = 0; i < 3; i++)
        inventory[i].display();

    return 0;
}