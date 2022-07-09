#include<stdio.h>
int main()
{
    int n1, n2, n3, avg, avg1;
    printf("input subject marks: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    avg1= (n1+n2+n3)/3;
    printf("your average mark is :%d \n",avg1);
    avg=avg1/10;
    switch (avg)
    {
    case 10:
    case 9:
        printf("grade O");
        break;
    case 8:
        printf("grade E");
        break ;
    case 7:
        printf("grade A");
        break ;
    case 6:
        printf("grade B");
        break ;
    case 5:
        printf("grade C");
        break ;
    case 4:
        printf("grade D");
        break ;
    default:
        printf("Failed");
    }
}

