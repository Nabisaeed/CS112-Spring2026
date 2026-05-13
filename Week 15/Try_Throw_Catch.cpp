#include <iostream>
#include <string>
using namespace std;

void flowRule1() {
    cout << "--- Rule 1: No exception thrown ---" << endl;
    try {
        cout << "step 1" << endl;
        cout << "step 2" << endl;
        cout << "step 3" << endl;
    }
    catch (int e) { cout << "catch ran" << endl; }
    cout << "Continues normally after try-catch" << endl;
}

void flowRule2(int choice) {
    cout << "\n--- Rule 2: First match runs only ---" << endl;
    try {
        cout << "step 1" << endl;
        if (choice == 1) throw 100;
        if (choice == 2) throw 3.14;
        cout << "step 2 SKIPPED" << endl;
    }
    catch (int e)    { cout << " catch(int): "    << e << endl; }
    catch (double e) { cout << " catch(double): " << e << endl; }
    cout << "Continues after catch" << endl;
}

void flowRule3() {
    cout << "\n--- Rule 3: catch(...) last resort ---" << endl;
    try { throw 'X'; }
    catch (int e)    { cout << "catch(int)" << endl; }
    catch (double e) { cout << "catch(double)" << endl; }
    catch (...)      { cout << " catch(...) caught it!" << endl; }
}

int main() {
    flowRule1();
    flowRule2(1);
    flowRule2(2);
    flowRule3();
    return 0;
}