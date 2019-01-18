#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(num =1;num<=n;num++)
    {
        if(num%2==0)
            printf("the no.%d is even\n",num);
    else
    printf("the no.%d is odd\n",num);

    }

getch();
return 0;
}
