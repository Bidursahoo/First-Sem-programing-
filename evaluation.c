#include<stdio.h>
int main()
{
    float X, a ,b, c, d;
    printf("enter the value of 'a' :");
    scanf("%f",&a);
    printf("enter the value of 'b' :");
    scanf("%f",&b);
    printf("enter the value of 'c' :");
    scanf("%f",&c);
    printf("enter the value of 'd' :");
    scanf("%f",&d);
    X=(a+b)/(c-d);
    if ( c!=d )
        printf("your value is : %f",X);
    else
        printf("your 'c' and 'd' values are equal");
}

