#include<stdio.h>
void main()
{

    int a,b=0,r,dummy;
    printf("enter a number: ");
    scanf("%d",&a);
    dummy=a;

    while(dummy!=0)
    {

        r=dummy%10;
        b=b+r*r*r;
        dummy=dummy/10;
    }
    printf("%d",b);

if(a==b)
        printf("armstrong number");
    else
        printf("Not an armstrong number");
}

