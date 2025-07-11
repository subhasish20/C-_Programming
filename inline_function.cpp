#include<iostream>
using namespace std;

class test
{
    public:inline int show(int x , int y)
    {
        return x < y ;
    }
};
int main()
{
    test t;
    t.show(5,6);

    return 0;
}