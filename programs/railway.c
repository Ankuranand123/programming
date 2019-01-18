#include<stdio.h>
#include<stdlib.h>

void main(){
    char cadre;
    scanf("%c",&cadre);
    switch(cadre) {
        case 'A':
        case 'a':
            printf("10%%");
            break;
        case 'B':
        case 'b':
            printf("8%%");
            break;
        case 'C':
        case 'c':
            printf("6%%");
            break;
        case 'D':
        case 'd':
            printf("5%%");
            break;
        default:
            printf("Invalid input");
    }
}
