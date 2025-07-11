#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;  
    cout<<"ENter the elements :"<<endl;
    long long sum = 0;  
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;     
        sum += num;     
    }

    cout << sum << endl; 
    return 0;
}
