#include<iostream>
using namespace std;
int main()
{
    int empid;
    cout<<"Enter employee id"<<endl;
    cin>>empid;
    float totalhrs,amountperhrs,sal;
    cout<<"Enter total hours work done by employee "<<endl;
    cin>>totalhrs;
    cout<<"total work done by employee in hours :"<<totalhrs<<endl;
    cout<<"Enter amount per hours "<<endl;
    cin>>amountperhrs;
    sal=totalhrs*amountperhrs;
    cout<<"Employee ID :"<<empid<<endl;
    cout<<"salary of employee is :"<<sal;
    return 0;
}

