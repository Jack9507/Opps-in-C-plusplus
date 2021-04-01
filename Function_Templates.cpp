#include<iostream>
using namespace std;
/*
int add(int a,int b)
{
    return a+b;
}
float add(float a, float b)
{
    return a+b;
}
double add(double x, double y)
{
    return x+y;
}
//  the problem above is that to add different type of numbers we need to overload the function and re write it
//   but templates solve this problem as they are the generic data types.
*/
template <typename T>

T sum(T x, T y)      // one function does the job for every data type
{
    return x+y;
}
template<typename T, typename N>      // template for multiple data types

T mul(T x, N y)
{
    return x*y;
}

int main()
{
    cout<<sum<int>(5,5)<<endl;
    cout<<sum<float>(5.2f,9.5f)<<endl;
    cout<<sum<double>(2.73437,3.47656)<<endl;
    cout<<sum<string>("Jatin","_Kumar")<<endl;

    cout<<mul<float, int>(5.2, 2)<<endl;





    return 0;
}
