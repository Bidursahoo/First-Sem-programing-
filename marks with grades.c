#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, avg;
    printf("input first subject marks: ");
    scanf("%d",&sub1);
    printf("input second subject marks: ");
    scanf("%d",&sub2);
    printf("input third number:");
    scanf("%d",&sub3);
    avg= (sub1+sub2+sub3)/3;
    printf("your average mark is :%d \n",avg);
    if (avg>=90)
        printf("and grade is O");
    else if (avg>=80 && avg<=89)
        printf("and grade is E");
    else if (avg>=70 && avg<=79)
        printf("and grade is A");
    else if (avg>=60 && avg<=69)
        printf("and grade is B");
    else if (avg>=50 && avg<=59)
        printf("and grade is C");
    else if (avg>=40 && avg<=49)
        printf("and grade is D");
    else
        printf("FAILED");
}
