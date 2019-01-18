#include<stdio.h>
void main()

{

    int n,i;
    scanf("%d",&n);
    for(i=2;i<n-1;i++)
    {


        if(n%i==0)
        {


            break;

        }
         else

        printf("%d is prime",n);
        }
        printf("%d is n prime",n);

}





