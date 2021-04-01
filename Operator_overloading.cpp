#include<bits/stdc++.h>
using namespace std;


class Complex
{
private:
    int real;
    int imaginary;
    int n;

public:
    Complex()
    {
        real =0;
        imaginary=0;
        n=0;
    }

    Complex(int x, int y)
    {
        real=x;
        imaginary =y;
    }

    Complex operator +(Complex &obj)          // overloading "+" binary operator in C++
    {
        Complex tmp;
        tmp.real= this->real+ obj.real;        //this->real is from obj1  and obj.real is from obj2
        tmp.imaginary = this->imaginary +obj.imaginary;
        return tmp;
    }
    void print()
    {
        cout<<"Complex number is : "<<real<<" + "<<imaginary<<"i "<<endl;
    }

    int operator ++()      //urinary operator overloading for pre increment "++n"
    {
        ++n;
        return n;
    }
    int operator ++(int)       // for post increment "n++"
    {
        n++;
        return n;
    }

    int operator --()     // pre decrement
    {
        --n;
        return n;
    }
    int operator --(int)   // post decrement
    {
        n--;
        return n;
    }

    void show()
    {
        cout<<"Value after urinary operator overloading -- "<<n<<endl;
    }


};


int main()
{
    ios_base::sync_with_stdio(false);     //   for faster input/Output in c++.
    cin.tie(NULL);

    Complex ob;
    ob.print();
    cout<<endl;
    Complex ob1(5,4),ob2(3,5),ob3(6,2);
    ob1.print();
    ob2.print();
    ob3.print();

    cout<<"After Addition from operator Overloading " <<endl;
    Complex res =ob1+ob2;           //  ob1.add(obj2);
    Complex res2 =ob1+ob2+ob3;      //  ob1.add(ob2.add(ob3));
    res.print();
    res2.print();


    cout<<endl<<endl<<"Unirary Operator Operloading "<<endl;
    Complex post;
    ++post;
    post.show();
    post++;
    cout<<endl;
    post.show();
    cout<<endl;

     --post;
    post.show();
    post--;
    cout<<endl;
    post.show();
   cout<<endl<<endl;



}
