#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    
    Student(string n) {
        rollNo = 0;
        name = n;
        cout << "Default Constructor Called" << endl;
    }

    

    
    Student(int r) {
        rollNo = r;
        name = "Not Assigned";
        cout << "One Parameter Constructor Called" << endl;
    }

    
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Two Parameter Constructor Called" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1("Ali");                
    s1.display();

    Student s2(101);            
    s2.display();

    Student s3(102, "Ali");     
    s3.display();

    return 0;
}