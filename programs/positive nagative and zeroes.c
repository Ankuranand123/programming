#include<stdio.h>
int main()
{


int p=0;
int n=0;
int z=0;
int k,i;
int arr[100];
printf("enter the no. of elements\n");
scanf("%d",&k);
for( i=0;i<=k;i++)
    scanf("%d ",&arr[i]);
for( i=0;i<=k;i++)
{
    if(arr[i]>0)
        p++;
        else if(arr[i]<0)
        n++;
        else z++;

}
printf("%d\n",p/k);
printf("%d\n",n/k);
printf("%d\n",z/k);

return 0;
}

