#include <stdio.h>

int main()
{
    int unit, previ, presen;
    float amt, total_amt;
    printf("enter the previous unit");
    scanf("%d",&previ);
    printf("then the present unit");
    scanf("%d",&presen);
    unit= presen-previ;
    printf("total units consumed: %d\n",unit);
    if(unit <= 200)
        amt = unit * 0.50;
    else if(unit <= 400)
        amt =(200 * 0.50)+ 100 + ((unit-200) * 0.65);
    else if(unit <= 600)
        amt =(200 * 0.50)+ (200 * 0.65)+ 230 +((unit-400) * 0.80);
    else
        amt = (200 * 0.50)+(200 * 0.65)+ 390 +((unit-600) * 1.00);
    total_amt  = amt ;
    printf("Electricity Bill = Rs. %f", total_amt);
}

