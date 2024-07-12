#include <iostream>
using namespace std;

    //IF-Else 1
    int main(){
    bool isMale=false;
    if(isMale){
    cout << "you are male";
    }else{
    cout<<"you are not male";
    }
    return 0;
    }
////////////////////////////////////////////
//2
{
bool isMale=false;
bool isTall=true;
if(isMale && isTall){ //both conditions need to be 

true
cout << "you are male";
}else{
cout<<"you are not male";
}
    return 0;
}
////////////////////////////////////////////
//3 OR
if(isMale || isTall) //any 1 needs to be true
////////////////////////////////////////////
//4
{
bool isMale=true;
bool isTall=true;
if(isMale && isTall){ //both conditions need to be true
cout << "you are tall male";
} else if(isMale && !isTall){
cout<<"you are not tall male";
} else if(!isMale && isTall){
cout<<"you are tall but not male";
}else{
cout<<"you are not male and nt tall";
}
return 0;
}    
