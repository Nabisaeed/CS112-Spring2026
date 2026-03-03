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
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setName("Alice");
    s1.setMarks(90);

   
    Student& ref = s1;

    
    ref.display();

   
    ref.setMarks(95);

    cout << "After modification through reference:" << endl;
    s1.display();  

    return 0;
}
