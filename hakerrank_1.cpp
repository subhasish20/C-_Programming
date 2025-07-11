#include<iostream>
using namespace std;

int main()
{
    int i , m, n;
    int arr1[3],arr2[3], final_aray[3];
    int alice, bob;
    alice = 0;
    bob = 0;
    cout<<"Enter the scores of Alice : "<<endl;
    for (i = 0; i < 3; i++)
    {
        cin>> arr1[i];
    }
    cout<< "Enter the scores of Bob : "<<endl;
    for (i = 0; i < 3; i++)
    {
        cin>> arr2[i];
    }
    for (i = 0; i < 3; i++)
    {
        if (arr1[i] > arr2[i])
        {
            alice++;
        }
        else if (arr1[i] < arr2[i])
        {
            bob++;
        }
    }


    final_aray[0] = alice;
    final_aray[1] = bob;
    for(i = 0; i < 2; i++)
    {
        cout<< final_aray[i] << " ";
    }

    return 0;
}