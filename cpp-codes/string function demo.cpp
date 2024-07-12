#include <iostream>
using namespace std;

int main() {
    //string function demonstration
    string phrase = "kushal";
    cout <<phrase.length(); //returns the chars prsnt in the string
    cout <<phrase[0]; //k
    phrase [0] = 't';
    cout <<phrase; //tushal
    cout <<phrase.find("sha", 0); //0-from where i want to start my search 
    string storeSubstr = phrase.substr(2, 3); //2-start, 3-hw mny to grab
    cout << storeSubstr; //sha
	return 0;
}