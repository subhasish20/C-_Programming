// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]
*/

#include<stdio.h>
int main()
{
    int size_of_array;
    printf("Enter how many elements you want to tak input :");
    scanf("%d",&size_of_array);
    int array[size_of_array];
    
    printf("Enter the elements :");
    for(int i=0; i<size_of_array; i++)
        {
            scanf("%d",&array[i]);
        }
    int num;
    printf("Write the elements you want to find the sum in array :");
    scanf("%d",&num);
    printf("the entered elements is :%d \n",num);

    for(int i=0; i<size_of_array; i++)
    {
        if (array[i] + array[i+1] == num)
        {
            printf("the sum of the elements of the array are %d and %d of index %d and %d",array[i],array[i+1],i,i+1);
        }
    }

    return 0;
}