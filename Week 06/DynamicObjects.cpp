#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    
    Date* dates[31];

    
    for (int day = 0; day < 31; ++day) {
        dates[day] = new Date(3, day + 1, 2020); 
    }

    cout << "All dates in March 2020:\n";
    for (int day = 0; day < 31; ++day) {
        dates[day]->display(); 
    }

    // Free memory
    for (int day = 0; day < 31; ++day) {
        delete dates[day];
    }

    return 0;
}