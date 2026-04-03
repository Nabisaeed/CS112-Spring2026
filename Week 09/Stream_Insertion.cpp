#include <iostream>
using namespace std;


class Student{

    public:


    string name;

    

    Student(string name){

        this->name=name;
    }
};

ostream& operator<<(ostream &o, Student s1){

    o<<s1.name;

    return o;
}

int main() {

    Student s1("Ahmad");


    cout<<s1<<endl;
    
    return 0;
}