#include<stdio.h>
#include<conio.h>
int main()
{
    int res;
    int a,b;
    printf("enter the first integer:");
    scanf("%d",&a);
    printf("enter the second integer");
    scanf("%d",&b);
    res=a-b;
    printf("the result is %d",res);
    getch();
    return 0;
}
