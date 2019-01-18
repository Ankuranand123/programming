#include<stdio.h>
#include<string.h>

void main()
{

    char str[50],i,j,rev[50],k;
    printf("Enter a string: ");

    gets(str);
    printf("%s\n",str);

    for(i=0;str[i]!='\0';i++);
    printf("%d\n",i);

    for(j=0;j<=i-1;j++)
    {

        rev[j]=str[i-1-j];
    }
    rev[j]='\0';

    printf("%s",rev);


for(k=0;k<=i-1;k++)
{

    if(str[k]!=rev[k])
        break;


}
if(k==i)
    printf("\npalindrome");
else
    printf("\nnot palindrome");
}


