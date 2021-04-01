#include<iostream>
using namespace std;

template<typename T, typename U>
class weight
{
private:
    T kg;             // generic variable
    U grams;          // generic variable
    int a ;       //normal  variable
public:
    void setdata(T x, U y)
    {
        kg =x;
        grams =y;
    }
    T getkg()
    {
        return kg;
    }
    U getgram()
    {
        return grams;
    }
};
int main()
{
    weight <int, double>obj1;
    obj1.setdata(5,8.92321);
    cout<<"Value of kg is : - "<<obj1.getkg()<<endl;
    cout<<"Value of grams is : - "<<obj1.getgram()<<endl;



    return 0;
}
