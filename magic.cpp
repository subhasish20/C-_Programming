#include<iostream>
using namespace std;

class try_class
{
    private:int b;

    public:int main()
        {
            b=45;
            cout<<"the value of the variable b is :"<<b<<endl;

            return 0;
        }
};

int main()
{

    try_class tc;
    tc.main();

    return 0;
}