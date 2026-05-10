#include <iostream>
#include <stack>
using namespace std;


class Student{

    public:
    string name;
    int marks;
    int reg_no;

    Student(string name, int marks, int reg_no):name(name), marks(marks), reg_no(reg_no){}
};

stack <Student> St;



int main() {

    Student S1("abc", 55, 99);
    St.push(S1);
    St.push(Student("Ahmad", 90, 102));
    St.push(Student("Wajid", 66, 103));
    St.push(Student("Khan", 45, 104));

    cout<<St.top().name<<" ";
    cout<<St.top().marks<<" ";
    cout<<St.top().reg_no<<" ";




    


    return 0;
}