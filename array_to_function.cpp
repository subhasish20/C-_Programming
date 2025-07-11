#include<iostream>
using namespace std;


int printArray(int array[], int size)
{
    cout<<"the given elements of the array are ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}

int main()
{
    int array[100];
    int n, i;
    cout<<"enter how may elements you want to store in the array :";
    cin>>n;
    cout<<"enter the elements you want store in the array :";
    for(i = 0;i<n; i++)
    {
        cin>>array[i];
    }

    printArray(array, n);



    return 0;
}