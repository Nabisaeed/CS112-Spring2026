#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;

public:
    
    Student() {
        name = new char[20]{0};  
    }

   
    Student(const Student& obj) {
        name = new char[20];          
        strcpy(name, obj.name);       
    }

    
    void setName(const char* nameVal) {
        strcpy(name, nameVal);
    }

    
    char* getName() {
        return name;
    }

};

int main() {

    Student s1;

    char name1[] = "Bruce Wayne";
    s1.setName(name1);
    cout << s1.getName() << endl;

    Student s2 = s1;   
    cout << s2.getName() << endl;

    char name2[] = "Clark Kent";
    s2.setName(name2);

    cout << s2.getName() << endl;
    cout << s1.getName() << endl;   

    return 0;
}