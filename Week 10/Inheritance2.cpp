#include <iostream>
using namespace std;


class Student{

    int reg_no;
    string name;

    public:

    Student(string n, int r){

        reg_no=r;
        name=n;
    }

    void DisplayBasicInfo(){
cout<<"The name of the student is "<<name<<endl;
cout<<"The reg of the student is "<<reg_no<<endl;
    }



};

class UndergradStudent: public Student{

    int year;
    string major;

    public:

    UndergradStudent(int r, string n, int y, string m): Student(n,r),year(y), major(m){


    }

    void displayundergradstudentinfo(){

cout<<"The year of the student is :"<<year<<endl;
cout<<"The major of the student is :"<<major<<endl;
    }





};

int main() {

    UndergradStudent s1(202135,"Ahmad", 2025, "CS");

    s1.DisplayBasicInfo();
    s1.displayundergradstudentinfo();
    
    return 0;
}