#include<stdio.h>
int main()
{
    int num1,num2;
    float float1,float2;


    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &float1, &float2);

    printf("%d", num1 + num2);
    printf("\n%d", num1 - num2);
    printf("\n%.1f", float1 + float2);
    printf("\n%.1f", float1 - float2);

    return 0;
}