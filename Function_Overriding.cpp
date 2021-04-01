#include<iostream>
using namespace std;
/*   overriding  : -  when 2 functions have same name and return type but different functionality then they are said to be overridden.
                   */

class Base1
{
public :
     void print()
    {
        cout<<"Base1 class print function called."<<endl;
    }
};
class Base2 : public Base1
{
public :
    void print()               // this print function is overridden in derived class
    {
        cout<<"Base2 class print function called."<<endl;
    }
};

/* ambiguity occurs in case of multiple inheritance  when the same function from two base classes is -
  not overridden in the derived class, derived class don't know which function to inherit as -
    function has same name in both the base class.   */

class Derived : public Base1, public Base2
{
public:
    void print()
    {
        Base1 obj1;
        obj1.print();
        Base2 obj2;
        obj2.print();
        cout<<"Derived class print function called."<<endl;
    }

};


int main()
{
    Derived obj;
    obj.print();


    return 0;
}
