#include <iostream>
using namespace std;

class Employee
{
private:
    int idNum;
    double salary;

public:
   
    Employee(int id, double salary);

   
    Employee operator+(Employee& emp);

 
    double getSalary() 
    { 
        return salary; 
    }

   
    void display()
    {
        cout << "Salary: " << salary << endl;
    }
};


Employee::Employee(int id, double salary)
{
    idNum = id;
    this->salary = salary;
}


Employee Employee::operator+(Employee& emp)
{
    double sal = salary + emp.salary;

    Employee total(0, sal);  
    return total;   
}


int main()
{
    Employee Clerk(115, 20000.00);
    Employee Driver(256, 15500.55);
    Employee Secretary(567, 34200.00);

    Employee sum(0, 0.0);

    sum = Clerk + Driver + Secretary;

    cout << "Sum is: ";
    sum.display();

    return 0;
}