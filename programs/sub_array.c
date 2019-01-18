#include<stdio.h>
#include<conio.h>

void main()
{

    int a[7]={6,2,4,1,8,9,10},b[6],i,j=0,k,l=0;

    for(i=0;i<=6;i++)
    {
        if(a[i]%2==0)
        {
            l++;

            while(j<=7)
            {

                b[j]=a[i];
                j++;
                break;
            }
        }
    }
    printf("\n%d",j);
    printf("\n%d",l);
    for(k=0;k<=j-1;k++)
    {

        printf("\n%d\t",b[k]);
    }
}
