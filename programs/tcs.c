#include<stdio.h>

void main()
{

    int n,res;
    printf("enter the no.");
    scanf("%d",&n);

    if(n%2==1)
    {

        res=n-1;
        printf("%d",res);
    }else
    {
        res=n/2-1;
        printf("%d",res);
    }
}
