#include<iostream>
using namespace std;

int i; // we can access it anywhere 

class Birthday_cake
{
    public: int frequency = 0;


    public: int print_value(int array[], int size)
        {
            cout<<"the elements of the array are :\n";
            for(i = 0; i<size; i++)
            {
                cout<<array[i]<<endl;
            }

            return 0;
        }
};

int main()
{
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int array[n];
    cout<<"enter the elements :";
    for(i = 0; i<n; i++)
    {
        cin>>array[i];
    }
    int size = sizeof(array)/sizeof(array[0]);

    Birthday_cake obj;

    obj.print_value(array,size);
    
    return 0;
}