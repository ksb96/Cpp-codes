#include<iostream>
//parent class
class Chef{
     public:
          void makeChicken(){
             std::cout << "The chef makes chicken" << '\n';
          }
          void makeSalad(){
               std::cout << "The chef makes salad" << '\n';
          }
          void makeSpecialDish(){
                std::cout << "The chef makes a special dish" << '\n';
          }
};

//child class
class ItalianChef : public Chef{
     public:
          // override
          void makePasta(){
               std::cout << "The chef makes pasta" << '\n';
          }
           // override
          void makeSpecialDish(){
                std::cout << "The chef makes chicken parm" << '\n';
          }
};

int main(){

     Chef myChef();//obj of parent class
     myChef.makeChicken();

     ItalianChef myItalianChef();//obj of child class
     myItalianChef.makeChicken();

     return 0;
}
