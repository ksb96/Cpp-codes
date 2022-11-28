//access specifier
#include<iostream>
class myClass{
    //private - access specifier
    private:
    int x; //local/private
    public:
    void print(){
        std::cout<<"Value of x: "<< x << '\n'; //x is accessible here(private block)
    }
};
int main(){
    myClass obj; //obj has access to the class
    obj.x = 11; //obj.x is not accessible to x(private), so an error will be through during exe.
    obj.print(); //obj.print has access to void print(public)
}