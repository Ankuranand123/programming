
#include<stdio.h>
#include<conio.h>



    int t1,t2;
    float r,x,ev,cv,ac,bc,sv;


    void readData();
    void showData();
    void calculations();





void main()
{

    readData();
    showData();
    calculations();
}

void readData()
{
    int t1,t2;
    float r,x;
    printf("enter the no. of trees planted per day\n");
   scanf("%d",&t1);
    printf("enter the no,. of trees to be planted per day as per the plan\n");
    scanf("%d",&t2);
    printf("enter the cost per tree\n");
    scanf("%f",&r);
    printf("enter any other expenses\n");
    scanf("%f",&x);
}

void showData()
{

int t1,t2;
    float r,x;
    printf("No.of trees planted=%d\n",t1);
    printf("No.of trees planned to be planted=%d\n",t2);
    printf("cost per tree=%f\n",r);
    printf("other expenses=%f\n",x);

}

void calculations()
{
    int t1,t2;
    float r,x;
    float ev = t1*r;
    float bc = t2*r;
    float ac = ev+x;
    float cv = ev-ac;
    float sv = ev/bc;






    if(cv<0)
        printf("Project is over budget\n");
    else{
        printf("Project is under budget\n");
        }



        getch();



}


