#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=30,c=45,sum=0;
    scanf("%d",&a);

    sum=a*a+b+c;
    if(sum%10==0){
        printf("valid");
    }else{
        printf("invalid");
    }
    getch();
    return 0;
}
