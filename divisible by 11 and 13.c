#include<stdio.h>
int main()
{
    int num1;
    printf("enter a number to check:");
    scanf("%d",&num1);
    if (num1%11==0 && num1%13==0)
        printf("the number is divisible by both 11 and 13");
    else
        printf("the inputed value is not divisibale by 11 and 13");
}
