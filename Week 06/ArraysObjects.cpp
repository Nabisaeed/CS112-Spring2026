#include <iostream>
using namespace std;

class Item {
    double price;

public:
    
    Item(double p) {
        price = p;
        cout << "Item created with price: " << price << endl;
    }

    void display() {
        cout << "Price: " << price << endl;
    }
};

int main() {

    
    Item inventory[3]= {22.4, 10.30, 99.0};

    cout << "\nDisplaying prices:\n";

    for(int i = 0; i < 3; i++) {
        inventory[i].display();
    }

    return 0;
}