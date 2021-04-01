#include<iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout<<"Base class show function called."<<endl;
    }

    virtual void print()                                                  // virtual print function
    {
        cout<<"Base class print function called."<<endl;
    }
};

class derived : public Base
{
public:
    void show()
    {
        cout<<"Derived class show function called."<<endl;
    }

    void print()
    {
        cout<<"Derived class print function called."<<endl;
    }
};
int main()
{
    Base *baseptr;
    derived derobj;

    baseptr =&derobj;        // base class pointer pointing to derived class object

    baseptr->print();   // since print is virtual so it will be called from derived class
    baseptr->show();       //  show will be called from base class because its a base class pointer


    return 0;
}
