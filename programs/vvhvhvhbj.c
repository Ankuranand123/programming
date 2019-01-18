#include<stdio.h>

int main()
{
    float metal_cost,tip,tax,total_cost;
    int tip_percent;
    int tax_percent;
        scanf("%f",&metal_cost);
     scanf("%d",&tip_percent);
     scanf("%d",&tax_percent);

        tip=metal_cost*(tip_percent/100.0);
    tax=metal_cost*(tax_percent/100.0);
    total_cost=metal_cost+tip+tax;
    printf("%.0f",total_cost);
    return 0;


}
