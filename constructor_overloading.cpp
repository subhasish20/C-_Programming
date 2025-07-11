#include<iostream>
using namespace std;

class overloading
{
    private:int a,b;
            float c;
    public:overloading() // default constructor
           {
            cout<<"creating the constructor overloading"<<endl;
           }
           overloading(int m,int n) //declaring the intger parameter for overloading
           {
            a = m;
            b = n;
            cout<<"in the constructor overloading the value of a :"<<a<<endl;
            cout<<"in the constructor value of b :"<<b<<endl;
           }
           overloading(float x) //declaring the float parameter for overloading
           {
            c=x;
            cout<<"by overloading the value of c :"<<x<<endl;
           }
};
//creating the main function
int main()
{
    int m,n;
    float x;
    cout<<"\nenter two numbers :";
    cin>>m>>n;
    cout<<"\nenter a float number :";
    cin>>x;
    overloading o1;
    overloading o2(m,n);
    overloading o3(x);

    return 0;
}
