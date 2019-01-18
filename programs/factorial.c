#include<stdio.h>
#include<conio.h>
int main()
{
    int counter;
    long int fact;

     int wow=counter;
    printf("enter the no.\n");
    scanf("%d",&counter);
     fact=1;
    while(wow>=1){
        fact=fact*wow;
        printf("%d\n",fact);
        wow--;
    }
    getch();
    return 0;
}
