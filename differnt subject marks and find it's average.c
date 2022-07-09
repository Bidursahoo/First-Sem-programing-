#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, avg;

    printf("enter the  marks obtained in subject 1 ");
    scanf("%d",&sub1);
    //declaration of sub 1
    printf("enter the  marks obtained in subject 2 ");
    scanf("%d",&sub2);
    //declaration of sub 2
    printf("enter the  marks obtained in subject 3 ");
    scanf("%d",&sub3);
    //declaration of sub 3
    printf("enter the  marks obtained in subject 4 ");
    scanf("%d",&sub4);
    //declaration of sub 4
    printf("enter the  marks obtained in subject 5 ");
    scanf("%d",&sub5);
    //declaration of sub 5
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("the average marks obtained by a student is %d",avg);
    return 0;
}
