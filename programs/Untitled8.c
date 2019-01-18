#include<stdio.h>
int main(){
    int n,arr[100],i;
    scanf("%d",&n);
    for( i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for( i=5;i>=0;i--)
        printf("%d\t",arr[i]);
    return 0;
}
