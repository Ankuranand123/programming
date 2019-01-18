#include<iostream>
using namespace std;
#include<conio.h>

int multiply(int ,int,int=1,int=1);
 int main()
{

    int a,b;
    cin>>a>>b;
    cout<<"rewsult is"<<multiply(a,b);
    int c;
     cin>>a>>b>>c;
    cout<<"rewsult is"<<multiply(a,b,c);
    int d;
     cin>>a>>b>>c>>d;
    cout<<"rewsult is"<<multiply(a,b,c,d);
    getch();
    return(0);

}
int multiply(int v,int w,int x,int y)
{

    return (v*w*x*y);
}
