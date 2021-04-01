#include<bits/stdc++.h>
using namespace std;

/*   Static Data Members :-  Shared by all objects of the class.
                            Initialized to 0 when first object is created;
                            Static data member can not be initialized inside a class it can only be declared.
                            Defined outside the class with the help of scope resolution operator.
        Application :    Used to keep track of number of objects created for a class. */

class Base
{
private:
    int n;
    static int cnt;       // static variable
public:
    Base()
    {
        cnt++;
    }

    static int getcnt()    // static member function it can only access static data members
    {
        return cnt;
    }
};N
int Base :: cnt =0;                // initialization of static variable outside the class.

int main()
{
    Base obj,obj2,obj3,obj4;       // 4 time constructor called
    cout<<"Number of objects created : "<<Base::getcnt();
    //cout<<res;


    return 0;
}
