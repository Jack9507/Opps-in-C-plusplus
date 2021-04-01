#include<iostream>
using namespace std;
   /*  Pure virtual function  : - A virtual function without any implementation
                                function declared by assigning 0 in the declaration
       Abstract Class :    A class with at least one pure virtual function;
          */
class Shape
{
public:

    virtual void getarea()=0;               // pure virtual function  , makes this class abstract
};
class Circle : public Shape
{
public:
    void getarea()      // need to override getarea function other wise it will come as it is and this class will also become abstract.
    {
        cout<<"Enter radius : "<<endl;
        int r;
        cin>>r;
        cout<<"Area of Circle = "<<3.14*r*r<<endl;
    }

};
class Square : public Shape
{
public:
    void getarea()
    {
        cout<<"Enter side of square : "<<endl;
        int s;
        cin>>s;
        cout<<"Area of square = "<<s*s<<endl;
    }
};
int main()
{
   // Shape obj;     // abstract class can not be instantiated
   Circle obj;
   obj.getarea();
   Square obj2;
   obj2.getarea();


    return 0;
}
