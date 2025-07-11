#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i, j,n,x;

    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    x = n - 1;

    int array[n][n];
    int diagonal_1, diagonal_2, sum_of_diagonal;

    diagonal_1 = diagonal_2 = sum_of_diagonal = 0;



    cout<< "Enter the elements of the  matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    // Display the elements of the matrix
    cout<<"the elements of the matrix are: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            
            
            cout << array[i][j] << "\t";
            
        }
        cout << endl;
    }

    // Set non-diagonal elements to 0 and display the modified matrix
    cout<<"the diagonal elements of the matrix are: " << endl;
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << array[i][j] << "\t";
                diagonal_1 += array[i][j];
            }
            else
            {   
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }

    cout<<"the second diagonal elements of the matrix are: " << endl;
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == x)
            {
                cout << array[i][j] << "\t";
                diagonal_2 += array[i][j];
            }
            else
            {   
                cout << 0 << "\t";
            }
        }
        cout << endl;

    }
    // Calculate the sum of the diagonal elements and display the result
    cout<<"the sum of the diagonal elements of the matrix are: " << endl;
    sum_of_diagonal = diagonal_1 - diagonal_2;
    cout << abs(sum_of_diagonal) << endl;


    return 0;
}