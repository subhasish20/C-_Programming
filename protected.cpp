#include<iostream>
using namespace std;

class test
{
    protected: int a;
            int display()
            {
                a = 15;
                cout<<"a = "<<a<<endl;

                return 0;
            }
    public:int show()
        {
            display();

            return 0;
        }
};

int main()
{
    test t;
    t.show();

    return 0;
}