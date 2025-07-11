#include<iostream>

using namespace std;

int main()
{

    int n,i;
    int positive_count, nagative_count, zero_count;
    positive_count = nagative_count = zero_count = 0;
    float ratio_positive, ratio_negative, ratio_zero;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    

    cout<<"The elements of the array are: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            positive_count++;
        }
        else if(arr[i]<0)
        {
            nagative_count++;
        }
        else
        {
            zero_count++;
        }
    }

    cout<<"\nThe number of positive elements in the array is: "<<positive_count;
    cout<<"\nThe number of negative elements in the array is: "<<nagative_count;
    cout<<"\nThe number of zero elements in the array is: "<<zero_count;

    ratio_positive = (double)positive_count/n;
    ratio_negative = (double)nagative_count/n;
    ratio_zero = (double)zero_count/n;

    cout<<"\nThe ratio of positive elements to the total number of elements is: "<<ratio_positive;
    cout<<"\nThe ratio of negative elements to the total number of elements is: "<<ratio_negative;
    cout<<"\nThe ratio of zero elements to the total number of elements is: "<<ratio_zero;


    return 0;
}