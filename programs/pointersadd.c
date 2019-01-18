#include<stdio.h>
int add(int * ,int *);
void main(){
    int a,b,t;
    printf("enter two no.:");
    scanf("%d %d",&a,&b);
    t=add(&a,&b);
    printf("%d",t);

}
int add(int *p,int *q){
    int c;
    c=*p+*q;
    return (c);
}
