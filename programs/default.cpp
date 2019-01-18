#include<iostream>
using namespace std;
#include<conio.h>

int multiply(int ,int,int=1,int=1);
 int main()
{

    int a,b,c,d;

     cin>>a>>b;
    cout<<"rewsult is"<<multiply(a,b);
    getch();
    return(0);

}
int multiply(int v,int w,int x,int y)
{

    return (v*w*x*y);
}
