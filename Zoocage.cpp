#include <iostream>          

using namespace std;

class ZooCage {
    int cageNumber;
    ZooCage* link;

    public:
        ZooCage(int n) : cageNumber(n), link(NULL) {}
        int getCageNumber() { return cageNumber; }
        ZooCage*& getLink() { return link; }
};

ZooCage *start = NULL;
void fun(ZooCage*& H, int num) {
    if (H) {
        fun(H->getLink(), num);
        return;
    }
    H = new ZooCage(num);
}
void fun(ZooCage* H) {
    if (H) {
        fun(H->getLink());
        cout << H->getCageNumber() << endl;
    }
}
int main() {
    fun(start, 4); fun(start, 2);
    ZooCage* temp = new ZooCage(5);
   temp->getLink() = start->getLink();
    start->getLink() = temp;
    fun(start, 3);fun(start);
    return 0;
}

 