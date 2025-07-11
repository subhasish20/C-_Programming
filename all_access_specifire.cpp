#include<iostream>
using namespace std;

class acess_specifire
{
    private: int a;
            int display()
            {
                a = 12;
                cout<<"the value of a= "<<a<<"\tit is a private function"<<endl;

                return 0;
            }
    protected: int b;
            int show()
            {
                b =78;
                cout<<"the value of b="<<b<<"\tit is a protected function"<<endl;

                return 0;
            }
    public: int c;
          int screen()
          {
            c = 56;
            cout<<"the value of c="<<c<<"\tit is a public function"<<endl;
            //now calling all the functions
            display();
            show();

            return 0;
          }
};

int main()
{
    acess_specifire as;

    cout<<"accessing all the functions by calling the public functions"<<endl;
    as.screen(); //displaying all the functions by calling the public functions

    return 0;
}