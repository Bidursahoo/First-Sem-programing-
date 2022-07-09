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
    if(unit <= 100)
        amt = unit * 1.40;
    else if(unit <= 200)
        amt =(100 * 1.40)+(unit-100) * 2.50;
    else
        amt = (100 * 1.40)+(100 * 2.50)+(unit-200) * 3.40;
    total_amt  = amt ;

    printf("Electricity Bill = Rs. %f", total_amt);
}

