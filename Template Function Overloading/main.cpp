#include <iostream>
#include<string>
#include<math.h>
using namespace std;

//Create various function of same name that runs
//based on the datatypes and number of arguments passed
template <typename T>

//Addition
T fun(T a,T b,T c)
{
    return a+b+c;
}

//Multiplication
template <typename T>
T fun(T a,T b)
{
    return a*b;
}

//Power of value
template <typename T>
T fun(T a)
{

    return pow(2,a);
}
int main()
{
    int addition = fun(3,5,7);
    float add = fun (2.8,7.3,9.2);
    int multiplication = fun(2,7);
    double power=fun(6);
    cout<<"Addition : "<<addition <<endl;
    cout<<"Float addition : "<<add<<endl;
    cout<<"Multiplication : "<<multiplication<<endl;
    cout<<" Power : "<<power;
    return 0;
}
