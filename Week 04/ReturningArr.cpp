#include <iostream>
using namespace std;

struct student{

    string name;
    int marks;
};

student* CreateList(int n){

    student * list= new student[n];


    for(int i=0; i<n; i++){

        cout<<"Enter the name of the student :"<<i+1<<endl;
        cin>>list[i].name;
        cout<<"Enter the marks of the student :"<<i+1<<endl;
        cin>>list[i].marks;

    }

    return list;


}

void display(student *list, int n){

    for(int i=0; i<n; i++){

    cout<<"The name of the student is :"<<list[i].name<<endl;    
    cout<<"The marks of the student is :"<<list[i].marks<<endl;


    }
}

int main() {

    student * list= CreateList(3);

    display(list, 3);

    delete []list;
    
    return 0;
}