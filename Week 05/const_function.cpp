#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() const {
        return marks=100;
    }
};

int main() {
     Student s1;
     s1.setMarks(100);
    cout << "Marks: " << s1.getMarks() << endl;
    return 0;
}
