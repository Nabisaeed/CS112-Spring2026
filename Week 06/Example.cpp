#include <iostream>
using namespace std;


class Item { 
private:
	double cost; 
	int units; 
public: 
Item() { 		//Default Constructor
	cost = 0.0;
	units = 0; } 

Item(int costVal){ 	//Constr 1 parameter
	cost = costVal;
	units = 0; }

Item(double c, int u) { //Constr 2 parameters
	cost = c;
	units = u; } 
};


int main() {

    Item i1;
    Item i2(230);
    
    return 0;
}