#include<stdio.h>
#include<string.h>
int main()
{
    int a,sum;
    double b,hat;
    char c[123]="Hackerrank";
    char d[123];
    scanf("%d",&a);
    scanf("%lf",&b);
    sum=a+b;
    hat=2*b;
    gets(c);
    printf("%d",sum);
     printf("%lf",hat);
     strcat(c,d);
     printf("%s",c);
     return 0;
}
