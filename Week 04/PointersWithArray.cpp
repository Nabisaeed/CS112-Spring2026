#include <iostream>
using namespace std;

int main() {

    int arr[5]= {12,34,56,78,32};

    cout<<arr<<endl;

     cout<<&arr[0]<<endl;

     for(int i=0; i<5; i++){

        cout<<*(arr+i)<<endl;
     }




    
    return 0;
}