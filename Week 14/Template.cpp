#include <iostream>
using namespace std;

template <typename T>

void swap1(T &a, T &b){

    T c=a;
    a=b;
    b=c;
}

class Student{

    

    public:

    string name;

    Student(string name="Ali"): name(name){}


};

ostream & operator<<(ostream & out, Student s1){

    out<<s1.name<<endl;

    return out;
}

int main() {

    string a="Sajid", b="Wajid";

    Student S1("Ahmad"), S2("Ubaid");

    swap1(S1,S2);

    cout<<S1<<endl;
    cout<<S2<<endl;
    
    return 0;
}