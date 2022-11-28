#include<iostream>
using namespace std;
main(){
  //declaration & initialization
int secretNum = 7;
int guess;
int guessCount = 0;
int guessLimit = 3;
bool outOfGuesses = false;

  //logic
while(secretNum  1= guess && !outOfGuesses ){
if(guessCount  < guessLimit ){
cout << "Enter guess: ";
cin >> guess;
guessCount ++;
}else{
outOfGuesses  = true;
}}
if(outOfGuesses){
cout << "You Lose!";
}else{
cout << "You Win!";
}
return 0;
}
