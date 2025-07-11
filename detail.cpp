#include<iostream>
using namespace std;

int main()
{
    char name[30];
    char address[30];
    long long number;
    int age;

    cout<<"enter yout name :"<<endl;
    cin>>name;
    cout<<"enter address :"<<endl;
    cin>>address;
    cout<<"enter age :"<<endl;
    cin>>age;
    cout<<"enter your number :"<<endl;
    cin>>number;
    
    //displaying the details
    cout<<"your name is :"<<name<<endl;
    cout<<"your address is :"<<address<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your number is :"<<number<<endl;

    return 0;
}