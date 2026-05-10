#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue <int> Q1;

    Q1.push(10);
    Q1.push(100);
    Q1.push(1000);
    Q1.push(10000);

cout<<Q1.front()<<endl;

cout<<(!Q1.empty() ? "Yes" : "No");
    
    return 0;
}