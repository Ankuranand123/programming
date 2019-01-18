#include<stdio.h>
#include<conio.h>
#include<math.h>


void main(void)
{
    int num1;
    int num2;
    int addsum;
    double sum;


    printf("Enter Opposite Side > ");
    scanf("%d",&num1);
    printf("Enter Adjacent Side > ");
    scanf("%d",&num2);

    num1 = num1 * num1;
    num2 = num2 * num2;
    addsum = num1 + num2;
    sum = addsum;


    if(addsum != 0){
        sqrt(sum);
        printf("The Hypotenuse Is %lf",sum);
    }
    getch();
}
