// overrides methods in sub-class
#include <iostream>
class Enemy
{
public:
    virtual void attack(){}; // will be overriden in child classes
    class Ninja : public : Enemy
    {
    public:
        void attack()
        {
            std::cout << "ninja attack" << '\n';
        }
    };
    class Monster : public : Enemy
    {
    public:
        void attack()
        {
            std::cout << "monster attack" << '\n';
        }
    };
    class main()
    {
        // obj
        Ninja n;
        Monster m;
        // individual address are stored in base class
        Enemy *enemy1 = &n;
        Enemy *enemy2 = &m;
        // individual class function is called
        enemy1->attack();
        enemy2->attack();
    }
}

//**NOTE - if the throw type is not know, we can use 'catch(...)' this way in catch block