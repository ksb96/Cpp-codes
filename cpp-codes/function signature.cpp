#include <iostream>
using namespace std;

    //function stub/signature
    void sayHi(string name); //func stub
int main(){
    sayHi("ksb");
    sayHi("kmk"); //fuction reusability
    sayHi("pop"); //fuction reusability
        return 0;
    }
    void sayHi(string name){
     cout << "hello " << name << endl;
    }