#include<iostream>
 
  //logic included
int add(int x, int y){//parameters
    return x+y;
}

char add(char a){
    return 0;
}
 //logic block end

int main(){
    int result = add(10,10);
    char result1 = char('c');
    std::cout<<"result of integer addition "<< result << '\n';
    std::cout<<"result of character addition "<< result1 << '\n';
}