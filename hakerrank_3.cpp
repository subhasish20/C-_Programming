#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int array[3][3];
    cout<< "Enter the elements of the 3x3 matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }
    // Display the elements of the matrix
    cout<<"the elements of the matrix are: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            
            
            cout << array[i][j] << "\t";
            
        }
        cout << endl;
    }

    // Set non-diagonal elements to 0 and display the modified matrix
    cout<<"the diagonal elements of the matrix are: " << endl;
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << array[i][j] << "\t";
            }
            else
            {   
                array[i][j] = 0;
                cout<<array[i][j]<< "\t";
            }
        }
        cout << endl;
    }
}