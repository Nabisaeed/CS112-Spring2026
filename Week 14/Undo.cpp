#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack <string> undo;


    string CT=" ";

    undo.push(CT);

    CT="hello ";

    undo.push(CT);

    CT= "Hello World";

    undo.push(CT);

    CT= "Hello World !!!!!!!!";


    undo.push(CT);

    cout<<"The current text is :";

    cout<<undo.top()<<endl;

    cout<<"After pressing CTR Z 1st Time :";

    undo.pop();

    cout<<"Value of CT is :"<<endl;

    cout<<undo.top()<<endl;

      

       cout<<"After pressing CTR Z 2nd Time :";

        undo.pop();

        cout<<undo.top()<<endl;

        

    
    return 0;
}