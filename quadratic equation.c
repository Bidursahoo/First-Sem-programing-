#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x1,x2;

    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d==0)
    {
        printf("Both roots will be same \n");
        x1=-b/(2.0*a);
        x1=x2;
        printf("First root is %f\n",x1);
        printf("Second root is %f\n",x2);
    }
    else if(d>0)
    {
        printf("There are two different roots \n");
        x1=(-b+ sqrt(d))/(2*a);
        x2=(-b- sqrt(d))/(2*a);
        printf("First  Root= %f\n",x1);
        printf("Second  Root= %f\n",x2);
    }
    else
        printf("No real root exist");
}
