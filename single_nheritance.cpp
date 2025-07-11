#include<iostream>
using namespace std;

class base_inheritance //declaring a base class for inheritance
{
    private:int a;

    public:int display()
            {
                a =12;
                cout<<"the value of the variable a is :"<<a<<endl;

                return  0;
            }
};

//declaring a derived class for inheritance & accessing his properties by de declaring it public

class derived_inheritance: public base_inheritance 
{
    private:int b;

    public:int show()
        {
            b=45;
            cout<<"the value of the variable b is :"<<b<<endl;

            return 0;
        }
};

int main()
{
    //now calling the base derived class and accessing the properties of the derived class by inheritance 

    derived_inheritance di; //now we can call the base class by the derived class object

    di.show();
    di.display();

    return 0;
}
