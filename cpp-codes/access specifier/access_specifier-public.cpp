//access specifier
#include<iostream>
class myClass{
    //public - access specifier
    public:
    int x; //global/public
    void print(){
        std:cout<<"Value of x: "<< x << '\n';
    }
};
int main(){
    myClass obj; //obj(name) to access the class data+member function
    obj.x = 11; //accessing the variable from the class(public)
    obj.print();
}