#include<stdio.h>

void main()
{

    int a,i;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=a-1;i>=1;i--)
    {

        a=a*i;
    }
    printf("%d",a);
}


