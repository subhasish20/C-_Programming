#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int n, i;
    int pos = 0, neg = 0, zero = 0;

    cout << "Enter how many elements you want to store: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    cout << "Positive numbers: " << pos << endl;
    cout << "Negative numbers: " << neg << endl;
    cout << "Zero numbers: " << zero << endl;

    // Print ratios using printf
    printf("Positive ratio: %.5f\n", (float)pos / n);
    printf("Negative ratio: %.5f\n", (float)neg / n);
    printf("Zero ratio: %.5f\n", (float)zero / n);

    return 0;
}
