#include<stdio.h>
int main()
{
    int rs10,rs5,rs2,rs1,total;
    printf("provide the number of rs.10, rs.5, rs.2, rs.1\n");
    scanf("%d%d%d%d",&rs10,&rs5,&rs2,&rs1);
    total= 10*rs10+ 5*rs5+ 2*rs2+ 1*rs1;
    printf("the total amount is : %d",total);
    return 0;
}
