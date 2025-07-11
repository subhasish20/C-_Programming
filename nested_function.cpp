#include<iostream>
using namespace std;

class Test
{
    private:int a;//declaring a variable
            int show() //declaring a private function
            {
                a = 10;
                cout<<"the value of a is :"<<a<<endl;

                return 0;
            }
    public:int display() //declaring a public function for accessing the private function
           {
            show(); //calling the private function

            return 0;
           }
};

int main()
{
    Test t;
    t.display(); //now the display function will call the nested private function

    return 0;
}