#include <iostream>
using namespace std;


class Employee{

    int salary;

    public:

    Employee(int salary=0){

        this->salary=salary;
    }

    bool operator==(Employee e1){

        return salary==e1.salary;
    }


    



};

int main() {

    Employee e1(200),e2;

if(e1==e2){

    cout<<"The salaries are equal"<<endl;

}

else {


    cout<<"The salaries are different "<<endl;
}
    
    return 0;
}