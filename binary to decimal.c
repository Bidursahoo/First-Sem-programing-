#include<stdio.h>
int main()
{
    int n,t,rem,dec=0,i=0;
    printf("Enter the binary number");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        rem=t%10;
        dec=dec+rem*pow(2,i);
        t=t/10;
        i++;
    }
    printf("The decimal number is %d",dec);
    return 0;
}
