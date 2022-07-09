#include<stdio.h>
int main()
{
    int num,rem,sum=0,num1;
    printf("enter any number");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of digits of the number %d = %d\n",num1,sum);
}
