#include<iostream>
using namespace std;

class jena
{
    public:jena()
          {
            cout<<"memory created\n\n";
          }
          ~jena()
          {
            cout<<"memory released";
          }
};
int main()
{
    jena j;
}