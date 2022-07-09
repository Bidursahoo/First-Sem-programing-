#include<stdio.h>
int main()
{
   int length, breadth, area;

   printf("Enter the Length: ");
   scanf("%d", &length);
 //input of length of rectriangle
   printf("\nEnter the Breadth: ");
   scanf("%d", &breadth);
 //input of breadth of rectriange
   area = length * breadth;
   printf("\nArea of Rectangle : %d", area);
 //area of rectriangle
   return (0);
}
