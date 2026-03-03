#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setName(string n) {
        name = n;
    }

    void setMarks(int m) {
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    
    Student s1;
    s1.setName("Alice");
    s1.setMarks(90);

    
    Student* ptr = &s1;

    
    Student& ref = s1;

    cout << "Access using pointer:" << endl;
    ptr->display();  

    cout << "Access using reference:" << endl;
    ref.display();    

    
    ptr->setMarks(95);

    
    ref.setName("Bob");

    cout << "After modification:" << endl;
    s1.display();     

    return 0;
}
