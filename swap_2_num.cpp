#include<iostream>
using namespace std;

class swapnum
{
    public:int a,b,t;
    int input();
    int output();
    int calculate();
};

//the input function is called by using the scope resolution operator
int swapnum::input()
{
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swap the two numbers are"<<a<<" and"<<b<<endl;
    return 0;
}
//the calculate function is called by using the scope resolution operator
int swapnum::calculate()
{
    t = a;
    a = b;
    b = t;
    return 0;
}
//the output function is called by using the scope resolution operator
int swapnum :: output()
{
    cout<<"after swap the two numbers are"<<a<<" and"<<b<<endl;
    return 0;
}
// now calling all the functions by main functions
int main()
{
    int z;
    swapnum s;
    s.input();
    s.calculate();
    s.output();
    return 0;
}


