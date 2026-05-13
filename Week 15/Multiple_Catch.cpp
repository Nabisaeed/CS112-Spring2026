#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void processStudent(string name, int marks, bool serverUp) {
    cout << "Processing: " << name << endl;
    try {
        if (!serverUp)
            throw runtime_error("Server is offline!");
        if (marks < 0 || marks > 100)
            throw out_of_range("Marks must be 0-100!");
        if (name.empty())
            throw invalid_argument("Name is empty!");

        string grade = marks>=90?"A+":marks>=80?"A":marks>=70?"B":marks>=60?"C":"F";
        cout << "   Marks: " << marks << " | Grade: " << grade << endl;
    }
    catch (runtime_error& e)   { cout << "  Server  : " << e.what() << endl; }
    catch (out_of_range& e)    { cout << "  Range   : " << e.what() << endl; }
    catch (invalid_argument& e){ cout << "  Input   : " << e.what() << endl; }
    catch (...)                { cout << "  Unknown : Contact admin!" << endl; }

}

int main() {
    // processStudent("Ali",   85,  true);
    // processStudent("Sara",  150, true);
    processStudent("Ahmed", 72,  false);
    // processStudent("Bilal", 91,  true);

    return 0;
}