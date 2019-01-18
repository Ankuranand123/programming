#include<stdio.h>
void Printtable(int);

int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    Printtable( number);


}
void Printtable(int a)
{
    int counter=1;
    int res;
    while(counter<=10)
    {
        res=a*counter;
        printf("%d\n",res);
        counter++;

    }

}

