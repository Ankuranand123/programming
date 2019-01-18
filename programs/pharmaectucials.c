#include<stdio.h>
#include<conio.h>
int main()
{
    int amount,buyingday,payingday,payingamount,savage;
    printf("enter the amount\n");
    scanf("%f",&amount);
    printf("enter the buyong day\n");
    scanf("%d",&buyingday);
    printf("enter the paying day\n");
    scanf("%d",&payingday);
      savage=amount*0.02;
      payingamount=amount-savage;
    if(payingday-buyingday<=10){


        printf("the amount to be paid is %f",payingamount);

    }else{
    printf("the amount to be paid is %f",amount);
    }
    getch();
    return 0;

}
