#include <iostream>
using namespace std;

class Employee 
{
private:
    int idNum;
    double salary;

public:
   
    Employee(int id, double salary)
    {
        this->idNum = id;
        this->salary = salary;
    }

    
    double addTwo(Employee& emp)
    {
        return this->salary + emp.salary;
    }

    
    double operator+(Employee& emp)
    {
        return this->salary + emp.salary;
    }

  
    double getSalary() 
    { 
        return salary; 
    }
};

int main()
{
    
    Employee emp1(101, 5000.50);
    Employee emp2(102, 6500.75);

    
    double total1 = emp1.addTwo(emp2);
    cout << "Total salary using addTwo: " << total1 << endl;

   
    double total2 = emp1 + emp2;
    cout << "Total salary using operator+: " << total2 << endl;

    return 0;
}