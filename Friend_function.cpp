#include<bits/stdc++.h>
using namespace std;

/* Friend function is used to access private and protected data members outside the class "  */
class Base
{
private:
    int n;
public:
    Base()
    {
        n=0;
    }

    Base(int x)
    {
        n=x;
    }
    void showdata()
    {
        cout<<"NUmber is "<<n<<endl;
    }
    friend void friendfun(Base &obj);
};

void friendfun(Base &obj)
{
    obj.n +=10;                    //     friend function can can access the private and protected data member
}
int main()
{
    Base ob;
    ob.showdata();
    Base ob2(50);
    friendfun(ob2);
    ob2.showdata();
    friendfun(ob);
 //  cout<<ob.n;     direct access of private or protected data member is not allowed outside the class

 return 0;
}
