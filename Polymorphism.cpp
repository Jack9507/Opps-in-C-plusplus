
/*         Polymorphism Means Many forms it's a greek word.
The ability of a same function to do different tasks in the same program or in general the presence of a function in multiple forms defines polymorphism.

         Polymorphism is divided in 2 parts :

            1. Compile Time Polymorphism.                                                        2.  Run Time Polymorphism
    a. Function Overloading  b. Operator Overloading  c. Templates                                    a.Function Overriding

    Templates are further divided in :
    a. Function Templates        b. Class Templates


          Here we will Discuss about Function Overloading

Function Overloading :  When 2 functions have same name and different parameters then functions are said to be overloaded.
                          overloaded functions perform different tasks.
                    Rules for overloading :
                       1. Difference in number of parameters
                    or 2. Difference in type of parameters
                    or 3. If number and type are same then occurence of parameters should be different.
    */


#include<bits/stdc++.h>
using namespace std;

class Mybase
{
   private:
       int a;
       int n;
       float f;
       string str;
   public:

        Mybase()
        {
            a=0;
            n=0;
            f=0.0;
            str="empty_string";
        }
        void getdata(int x)
        {
            a=x;
        }

        void getdata(int x, float y)           //     overloaded function with different number of parameters.
        {
            a=x;
            f=y;
        }
        void getdata(int x , string s)         //     overloaded function with different set of parameters.
        {
            n=x;
            str=s;
        }

       void showdata()
       {
           cout<<" a = "<<a<<endl;
           cout<<" n = "<<n<<endl;
           cout<<" f = "<<f<<endl;
           cout<<" str = "<<str<<endl;
       }

};

int main()
{
    Mybase ob;
    ob.showdata();
    cout<<endl;
    ob.getdata(5);
    ob.getdata(9, 5.54);
    ob.showdata();
    cout<<endl;
    ob.getdata(50, "Jatin");
    ob.showdata();
    cout<<endl;


    return 0;
}
