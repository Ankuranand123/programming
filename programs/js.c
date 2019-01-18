#include<stdio.h>

int main()
{

    char ankur[10];
    char shipra[10];

    gets(ankur);
    gets(shipra);

    if (strcmp(ankur,shipra)==0)
    {

        printf("same");
    }else
    {

        printf("not same");
    }
    return 0;
}
