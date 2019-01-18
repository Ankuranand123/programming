#include<stdio.h>
#include<conio.h>
int main()
{
    int counter,start=1;
    int mul;
    printf("enter the no.\n");
    scanf("%d",&counter);
    while(start<=20){
        mul=counter*start;
        printf("%d*%d=%d\n",counter,start,mul);
        start++;

    }
    getch();
    return 0;
}
