#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    float marks;

public:
    void setRollNumber(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

    void setMarks(float m) {
        if(m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks!" << endl;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    s1.setRollNumber(101);
    s1.setMarks(85.5);

    cout << "Roll Number: " << s1.getRollNumber() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
