#include <iostream>
using namespace std;

// Structure to store address-related information
// A structure is a user-defined data type used to group related data
struct Address
{
    int zip;        // Stores the postal / ZIP code
    string City;    // Stores the name of the city
};

// Structure to store student-related information
// This structure contains built-in data types as well as another structure
struct Student
{
    string name;    // Stores the student's name
    int regNo;      // Stores the student's registration number
    float grade;    // Stores the student's grade
    Address address; // Nested structure to store address details
};

int main()
{
    // Creating and initializing a Student structure object
    // This initialization also initializes the nested Address structure
    Student s1 = { "Ahmad", 2025674, 1.9, 234562, "Karachi" };

    // Display student information
    cout << "The name of the student is : " << s1.name << endl;
    cout << "The regNo of the student is : " << s1.regNo << endl;
    cout << "The grade of the student is : " << s1.grade << endl;

    // Accessing members of the nested Address structure
    cout << "The zip of the student is : " << s1.address.zip << endl;
    cout << "The City of the student is : " << s1.address.City << endl;

    return 0;  // Program ends successfully
}
