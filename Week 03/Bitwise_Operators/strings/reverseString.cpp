#include <iostream>
using namespace std;


void ReverseString(string & s){

    int start=0;
    int end= s.length()-1;

    while(start<end){

        swap(s[start],s[end]);

        start++;
        end--;
    }
}

int main() {


    string s1= "Hello";

    ReverseString(s1);

    cout<<s1<<endl;
    
    return 0;
}