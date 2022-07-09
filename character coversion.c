#include<stdio.h>
int main()
{
    char chr;
    printf("enter a character to change:");
    scanf("%c",&chr);
    if(chr>='A' && chr<='Z')
        printf("your inputed character is upper and after conversion :%c",chr+32);
    else
        printf("your inputed character is lower and after conversion :%c",chr-32);
}

