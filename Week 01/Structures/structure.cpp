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
    // Create a Student structure object
    Student s1;

    // Assign values to the structure members
    s1.regNo = 2025123;
    s1.Name = "Ali";
    s1.grade = 1.9;

    // Display student information using the dot (.) operator
    cout << "The name of the student is " << s1.Name << endl;
    cout << "The reg no of the student is " << s1.regNo << endl;
    cout << "The grade of the student is " << s1.grade << endl;

    return 0;  // Program ends successfully
}
