#include <iostream>
using namespace std;

// Structure to store student-related information
// A structure is a user-defined data type used to group related data
struct Student
{
    int regNo;      // Stores the student's registration number
    string Name;    // Stores the student's name
    float grade;    // Stores the student's grade
};

int main()
{
    // Declare an array of structures
    // This array can store information of multiple students
    Student SE[5];

    // Assign values to the first element of the structure array
    SE[0].Name = "Ahmad";
    SE[0].regNo = 2025167;
    SE[0].grade = 2.4;

    // Display information of the first student in the array
    cout << "The name of the student is " << SE[0].Name << endl;
    cout << "The reg no of the student is " << SE[0].regNo << endl;
    cout << "The grade of the student is " << SE[0].grade << endl;

    return 0;  // Program ends successfully
}
