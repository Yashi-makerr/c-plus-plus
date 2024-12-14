#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    if(ch>='a' && ch<='z'){
        cout<<"This is a lower case letter";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is a upper case letter";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is a numeric";
    }
}