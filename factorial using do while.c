#include<stdio.h>
int main()
{
    int fact=1,no,i=1;
    printf("Enter no whose factorial is to be found\n");
    scanf("%d",&no);
    do
    {
        fact*=i;
        i++;

    }
    while(i<=no);
    {
        printf("the factorial of %d= %d",no,fact);
    }

}
