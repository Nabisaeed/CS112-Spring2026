#include <iostream>
using namespace std;

string EncryptDecrypt(string message, char key){

    for(int i=0; i<message.length(); i++){

        message[i]= message[i]^key;
    }

    return message;
}

int main() {

    string message="hello how are you";

    char key= 'B';

    cout<<"The message before encryption is "<<message<<endl;

    string encrypt= EncryptDecrypt(message, key);

    cout<<"The message after encryption is : "<<encrypt<<endl;

    cout<<"The decrypted message is "<<EncryptDecrypt(encrypt, key);

cout<<endl;

    
    return 0;
}