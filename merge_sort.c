#include<stdio.h>


void main()
{
    int a[20], b[20],n,lb,ub,mid,A;

    printf("emter the size of the array :");
    scanf("%d",&n);

    printf("enter the elements of the array :");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    merge(A,lb,ub,mid);
    
}
merge(A,lb,ub,mid)
{
    int i,k;

    
    i= lb;
    
}