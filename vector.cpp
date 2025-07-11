#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int i;
    vector<int> v;
    v.push_back(5);
    cout<<v[0]<<endl;

    v.push_back(4);
    cout<<v[1]<<endl;

    int x = *v.begin();
    cout<<x;

    return 0;
}