#include<iostream>
using namespace std;

class Base
{
private:
    int a,b;
protected:
    int c;
public:
    Base()
    {
        a=0;b=0;c=100;
    }
    Base(int x, int y,int z)
    {
        a=x; b=y; c=z;
    }
    void showdata()
    {
        cout<<"Base class showdata called."<<endl;
    }
    void getdata()
    {
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c ="<<c<<endl;
    }

};
class Derived : public Base           // publically inheriting base class
{
    // this class will have access to protected data members and member functions but private data members can not be accessed here
public:
    void fun()
    {
        int n =c+5;
        cout<<n<<endl;
    }
};
class derived2 : protected Base
{
    // since this class is protectively inheriting base class
    // so public data members coming from base class will become protected in this class and protected will remain protected
};
class derived3 : private Base
{
    // this class is privately inheriting the base class
    // so all the public and protected data members coming from base class will become private here and then they cannot be inherited by any-
    // class further because they are all private now
public:
    int newm= c+12;
    void showdata()
    {
        cout<<"newc  = "<<newm<<endl;
        cout<<"derived3 class showdata called."<<endl;
    }
    int cget()
    {
        return c;   // since 'c' is private here so returning it from a member function so that it can be used in derived class
    }

};
class derived4 : public derived3
{
public :
  //  int k=c+500;      variable 'c' is private in derived3 so it cannot be accessed here

  int k=cget() +9;
    void dr4show()
    {
        cout<<" k = "<<k<<endl;
    }
};
int main()
{
    Base ob;
    //ob.a;  ob.b; ob.c;          private and protected data members can not be accessed directly
    ob.getdata();                // but member functions can be accessed because they are public
    Base ob2(5,55,555);
    ob2.getdata();

    Derived obj;
    obj.fun();

    derived3 ob3;
    ob3.showdata();

    derived4 ob4;
    ob4.dr4show();



    return 0;
}

