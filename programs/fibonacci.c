#include<stdio.h>
void main()
{

    int a=1;
    int b=2;
    int i,c;

    printf("%d\t%d",a,b);

    for(i=1;i<=10;i++){
        c=a+b;
        printf("\t%d\t",c);
        a=b;
        b=c;
    }
}
