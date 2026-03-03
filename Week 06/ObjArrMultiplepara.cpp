#include <iostream>
using namespace std;

class Item {
    double price;
    int quantity;

public:

// Item(){

// }
    
    Item(double p, int q) {
        price = p;
        quantity = q;
        cout << "Item created: Price = " << price << ", Quantity = " << quantity << endl;
    }

    void display() {
        cout << "Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    
    Item inventory[]={

        Item(12.4, 100),
        Item(7.8, 45)
    };

    cout << "\nDisplaying all items:\n";
    for(int i = 0; i < 2; i++) {
        inventory[i].display();
    }

    return 0;
}