#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three numbers :"<<endl;
    cin>>a>>b>>c;

    if (a>b && a>c) 
    {
        cout<<"the greatest number is : "<<a<<endl;
    }
    else if (b>a && b>c) 
    {
        cout<<"the greatest number is :"<<b<<endl;
    }
    else
    {
        cout<<"the greatest number is : "<<c<<endl;
    }
    
    return 0; 
}