#include<stdio.h>
int main()
{
    int princ, intrest, time, si;

    printf("what is the principal value%i");
    scanf("%d",&princ);
    //principal value input
    printf("/n what is the intrest value%i");
    scanf("%d",&intrest);
    //input intrest value
    printf("/n what is the time period%i");
    scanf("%d",&time);
    //what is the time
    si= princ*(1+intrest*time);
    printf("/nthe simple intrest is: %i",si);
    return (0);
}
