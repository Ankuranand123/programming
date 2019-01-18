#include<stdio.h>
void main()
{
    char s[15];
    int data;
        printf("enter a string: ");
        gets(s);
        data=length(s);
        printf("%d",data);
}

int length(char *p)
{


    int l;
    for(l=0;*(p+l)!='\0';l++);
    return (l);
}
