#include<stdio.h>
int main()
{
   int gross_salary, basic, da, hra;

   printf("Enter basic salary = ");
   scanf("%d", &basic);

   da = (60 * basic) / 100;
   hra = (15 * basic) / 100;

   gross_salary = basic + da + hra;

   printf("\nGross salary = %d", gross_salary);
   return (0);
}
