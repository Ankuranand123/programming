#include<stdio.h>


void main()
{

    int n ,i ,arr[100],max,j=0;

    printf("Enter your age: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<=n;i++)
    {

        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    for(i=0;i<=n;i++)
    {

        if(max==arr[i])
        {
            j++;
        }
    }
    printf("\n%d",j);



    }
