#include<iostream>
#include<vector>
using namespace std;

int  main()
{

    int n,i,j,temp;
    int index1, index2;
    int sum = temp = index1 = index2 =  0;
    cout<<"enter how many numbers you want to store :";
    cin>>n;
    vector<int>vec(n);

    cout<<"enter the elements :";
    for ( i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    cout<<"the elements are :";
    for ( i = 0; i < n; i++)
    {
        cout<<vec[i]<<endl;
    }    
    
    cout<<"enter the sum you want to find :"<<endl;
    cin>>sum;

    for(i = 0;i<n;i++)
    {
        temp = vec[i];
        for(j = 1; j<n;j++)
        {
            if((temp + vec[j]) == sum)
            {
                index1 = i;
                index2 = j;

                cout<<"the sum of the elementsa are :"<<temp<<" and "<<vec[j]<<endl;
                cout<<"the indexes are "<<index1<<" and "<<index2<<endl;
                exit(0);
            }
        }
    }
    
    return 0;
}