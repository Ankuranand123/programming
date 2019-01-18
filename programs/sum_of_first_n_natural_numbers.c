#include<stdio.h>

void main()
{

    int a,b=0,i;

    printf("enter a number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=b+i;
    }
    printf("%d",b);
}
