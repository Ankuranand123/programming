#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,res=1,sum;
scanf("%d",&num);
for(i=num;i>=1;i--){
sum=res*i;
printf("%d",res);
}
getch();
return 0;
}
