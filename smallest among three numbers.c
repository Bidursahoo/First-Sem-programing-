#include<stdio.h>
int main()
{
    int num1, num2, num3, smallest;
    printf("provide three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);
    smallest = (num1<num2)?(num1<num3?num1:num3):(num2<num3?num2:num3);
    printf("the smallest number is %d",smallest);
    return 0;
}
