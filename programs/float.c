#include<stdio.h>
int main(){
    int counter;

        scanf("%d",&counter);


if(counter%2==1)
    printf("Weird");
else if((counter%2==0)&&((counter==4)||counter>20))

    printf("Not Weird");


    else
    printf("Weird");



    return 0;
}
