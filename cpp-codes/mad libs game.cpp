#include <iostream>
using namespace std;

int main() {
    //building Mads Libs Game
    string color, pluralNoun, celebrity;
    cout<<"enter a color:";
    getline(cin, color); //getting input from user
    cout<<"enter a plural noun:";
    getline(cin, pluralNoun);
    cout<<"enter a celebrity:";
    getline(cin, celebrity);
    
    cout<< "roses are " << color << endl;
    cout<<  pluralNoun <<" are blue" << endl;
    cout<< "I love " << celebrity << endl;
	return 0;
}