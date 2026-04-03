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

    void operator=(string s1){

        name=s1;


    }



};

int main() {

    Student s1;

    s1="Ali";

    s1="Ahmad";

    s1.Display();



    
    return 0;
}