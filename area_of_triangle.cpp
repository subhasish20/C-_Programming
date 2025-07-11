#include<iostream>
using namespace std;

class triangle
{
    public: float base,height,area;
    int Area()
    {
        cout<<"enter the base and height of the triangle :";
        cin>>base>>height;
        area = 0.5*base*height;
        return 0;
    }
    int show()
    {
        cout<<"the area of the triangle is :"<<area;
        return 0;
    }
};
int main()
{
    triangle t;
    t.Area();
    t.show();

    return 0;
}