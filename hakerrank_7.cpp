/*
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    int arr[5];
    int sum_element[5] = {0, 0, 0, 0, 0};

    cout<<"enter the elements you want to store :";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are :";
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0; i<5; i++)
    {
        for(j=i; j<5; j++)
        {
            sum_element[i] += arr[j + 1];
        }

    }

    cout<<"\nThe sum of the elements of the array is :";
    for(i=0; i<5; i++)
    {
        cout<<sum_element[i]<<" ";
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printArray(myArray, size);  // Pass entire array
    return 0;
}
