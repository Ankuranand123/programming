#include<stdio.h>
#include<stdlib.h>

void main(){
    int N;
    scanf("%d",&N);
    int sum = ((int) (N%10)*(N%10) + (int) ((N/10)%10)*((N/10)%10) + (int) (N/100)*(N/100));
    if((sum%10) == 0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}
