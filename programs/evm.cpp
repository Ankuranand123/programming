
#include<iostream>
using namespace std;

class projectManagement
{
private:
    int t1,t2;
    float r,x;

public:
    void readData();
    void showData();
    void calculations();

};

void  projectManagement::readData()
{
    cout<<"enter the no. of trees planted per day"<<endl;
    cin>>t1>>endl;
    cout<<"enter the no,. of trees to be planted per day as per the plan"<<endl;
    cin>>t2>>endl;
    cout<<"enter the cost per tree"<<endl;
    cin>>r>>endl;
    cout<<"enter any other expenses"<<endl;
    cin>>x>>endl;
}

void projectManagement::showData()
{
    cout<<"No.of trees planted= "<<t1<<endl;
    cout<<"No.of trees planned to be planted= "<<t2<<endl;
    cout<<"cost per tree= "<<r<<endl;
    cout<<"other expenses= "<<x<<endl;

}

void projectManagement::calculations()
{
    float ev=t1*r;
    float bc=t2*r;
    float ac=ev+x;
    float cv=ev-ac;

    if(cv<0)
        cout<<"Project is over budget"<<endl;
    else
        cout<<"Project is under budget"<<endl;


}

void main()
{
    projectManagement evm;
    evm.readData();
    evm.showData();
    evm.calculations();
}
