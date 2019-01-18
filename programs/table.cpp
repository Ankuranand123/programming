#include<stdio.h>
void Printtable(int);
int main(){
    int number,res;
    printf("enter the number:");
    scanf("%d",&number);
    Printtable(int number);
    return res;

}
void Printtable(int a)
{
    int counter=1;
    int res;
    while(counter<=10)
    {
        res=a*counter;
        counter++;

    }
}

