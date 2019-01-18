# include<stdio.h>

void main()
{

    int a,b;
    int i=0;
    scanf("%d",&a);

    while(a!=0)
    {

        b=a%10;
        i++;
        a=a/10;
    }
    printf("%d",i);
}
