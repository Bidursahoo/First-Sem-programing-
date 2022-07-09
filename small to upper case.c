#include<stdio.h>
int main()
{
    char cha1;
    char cha2='W';
    printf("enter a lower case letter : ");
    scanf("%c",&cha1);
    printf("the upper case letter is %c\n",cha1-32);
    printf("the lower case letter is %c\n",cha2+32);
    return 0;
}
