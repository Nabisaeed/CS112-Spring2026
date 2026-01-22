#include <iostream>
using namespace std;

// Enum is a user-defined data type that represents a fixed set of named constant values.
// Here, Status represents different states of an order.
enum Status
{
    Processing = 100,   // Order is currently being processed
    Shipped    = 200,   // Order has been shipped
    Delivered  = 300    // Order has been delivered
};

int main()
{
    // Declare a variable of type Status and assign it a value
    Status status = Shipped;

    // Check the current status of the order
    if (status == Processing)
    {
        cout << "The order is processing" << endl;
    }
    else if (status == Shipped)
    {
        cout << "The order is shipped" << endl;
    }
    else if (status == Delivered)
    {
        cout << "The order is delivered" << endl;
    }

    return 0;  // Program ends successfully
}
