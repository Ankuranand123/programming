#include<stdio.h>
#include<conio.h>
int main()
{
    int num,counter;
    for(num=2;num<20;num++){
        for(counter=2;counter<num;counter++)
        if(num%counter==0)
            break;
        if(num==counter)
            printf("%d\t",num);
    }
    getch();
    return 0;
}
