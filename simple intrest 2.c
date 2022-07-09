#include<stdio.h>
int main()
{
    float principal, period, rate;
    float si;
    printf("\nEnter Prinicpal Amount:\t");
    scanf("%f", &principal);
    printf("\nEnter Period of Years:\t");
    scanf("%f", &period);
    printf("\nEnter Rate of Interest:\t");
    scanf("%f", &rate);
    si = (principal * period * rate)/100;
    printf("\nSimple Interest = %f\n", si);
    printf("\n");
    return 0;
}
