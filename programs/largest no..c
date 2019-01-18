#include<stdio.h>
#include<conio.h>
int main()
{ int arr[4];
int i;
int large = arr[0];

for(i=0;i<4;i++);
scanf("%d",&arr[i]);
if(arr[i]>large){
large=arr[i];
printf("largest no. is %d",large);
}
getch();
return 0;
}
