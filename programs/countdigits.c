#include<stdio.h>
void main()
{

    int number,i=0;
    scanf("%d",&number);
    while(number!=0)
    {
        number=number/10;
        i++;
    }
    printf("%d",i);
    }
