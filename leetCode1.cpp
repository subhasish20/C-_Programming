#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter the number of elements you want to store :\n";
    cin>>n;
    vector<int>vec(n);
    cout<<"enter the elements :";
    for (size_t i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    cout<<"the elements that you gave are \n";
    for ( i = 0; i < n; i++)
    {
        cout<<vec[i];
    }



    return 0;
    
    
}