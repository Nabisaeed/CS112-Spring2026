#include <iostream>
using namespace std;


class Student{

    string name;
    int Id;

    public:

    Student(string name= "", int Id=0){

        this->Id=Id;
        this->name=name;
    }

    void Display(){

        cout<<"The name of the student is :"<<name<<endl;
    }

    void operator=(Student &s1){

       name=s1.name;
       Id=s1.Id;

       cout<<"This is overloaded function"<<endl;


    }



};

int main() {

    Student s1("Wajid", 202);

    Student s2;

    s2=s1;



    s2.Display();



    
    return 0;
}