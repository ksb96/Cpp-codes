#include<iostream>
 
int add(int x, int y){//parameters
 //logic included
    return x+y;
}
 
int main(){
    int result = add(10,10);//argument - passing values
    std::cout<<"result of addition "<< result << '\n';
}