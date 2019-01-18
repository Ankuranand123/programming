#include<stdio.h>
#include<conio.h>
int main()
{
    int counter;
    printf("enter the no.\n");
    scanf("%d",&counter);
    if (counter%2==0){
        printf("the no.%d is even",counter);
    }else{
    printf("the no.%d is odd",counter);
    }
    getch();
    return 0;
    }
