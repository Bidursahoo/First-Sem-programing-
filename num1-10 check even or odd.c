#include<stdio.h>
int main()
{
    int num1;
    printf("Enter any digit within 1-10 :");
    scanf("%d",&num1);
    switch(num1 % 2)
    {
        /* If n%2 == 0 */
        case 0:
            printf("Number is Even");
            break;

        /* Else if n%2 == 1 */
        case 1:
            printf("Number is Odd");
            break;
    }
}
