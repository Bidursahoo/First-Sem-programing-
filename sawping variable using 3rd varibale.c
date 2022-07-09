#include<stdio.h>
int main()
{
    int num1, num2;
    int temp;
    printf("Enter the first and second number");
    scanf("%d%d",&num1,&num2);
    printf("Before swaping the num1=%d\nand num2=%d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nAfter swapping the variables num1=%d\nnum2=%d",num1,num2);
    return 0;
}
