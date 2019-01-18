#include<stdio.h>
int square(int);
void main(){
    int a,s;
    printf("Enter the two no.");
    scanf("%d",&a);
    s=square(a);
    printf("%d",s);
}
int square(int x){
    int c;
    c=x*x;
    return (c);
}
