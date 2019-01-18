#include<stdio.h>
void Printtable();
void Readtable();

void main(){
        int a,b;

    Readtable();

    Printtable();


}
void Printtable()
{   int b;
    int counter=1;
    int res;
    while(counter<=10)
    {
        res=b*counter;
        printf("%d\n",res);
        counter++;

    }
    void Readtable()
    {   int a;
        printf("enter the number:");
        scanf("%d",&a);




    }


}

