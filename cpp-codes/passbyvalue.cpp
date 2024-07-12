#include<iostream>
using namespace std;

void noreturn(int x, int y){
    cout<<x<<y<<endl;
}

int main() {
    int a = 5;
    int b = 7;
    noreturn(5,7);
    return 0;
}