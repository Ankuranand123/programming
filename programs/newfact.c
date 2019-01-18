#include<stdio.h>

void main()
{

    int number,j,i=1;
    printf("Enter a number: ");

    scanf("%d",&number);
    for(j=number;j>=1;j--)
    {

        i=i*j;
    }
    printf("The factorial of %d is %d",number,i);
}

