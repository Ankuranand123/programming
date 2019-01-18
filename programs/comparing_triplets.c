#include<stdio.h>

void main()
{

int a[2],b[2],i,alice=0,bob=0;
for(i=0;i<=2;i++)
{

    scanf("%d",&a[i]);
    scanf("%d",&b[i]);
}
for (i=0;i<=2;i++)
{

    if(a[i]>b[i])
        alice++;
    else if(b[i]>a[i])
        bob++;

else
    continue;
}
printf("\n%d\t%d",alice,bob);

}
