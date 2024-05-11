//wap to print and find the greatest number between three number
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three number :";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"the greatest number is :"<<a<<endl;
    }
    else if (b>a&&b>c)
    {
        cout<<"the greatest number is :"<<b<<endl;
    }
    else
    {
        cout<<"the greatst number is :"<<c<<endl;
    }
    return 0;

}