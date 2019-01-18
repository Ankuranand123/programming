#include<stdio.h>
void length(int *);
main(){
    int arr[5];
    length(arr);

}

void length(int *p){
    int i;
    int max=*(p+0);
    for(i=0;i<=4;i++)
        scanf("%d\n",p+i);

            if(*(p+i)>max)
                max=*(p+i);

        printf("%d",max);

}
