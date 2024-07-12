#include <iostream>
using namespace std;

int main() {
    //get strings of text
    string name;
    cout<<"enter your name: ";
    getline(cin, name); //enter line(string) of txt
    cout<< "hello " <<name << endl;
	return 0;
}