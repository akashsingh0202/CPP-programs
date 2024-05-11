//wap to print and find the greatest number between three number
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THREE NUMBER :";
    cin>>a>>b>>c;
    if (a>b)
    {
        if(a>c)
        {
            cout<<"THE GREATEST NUMBER IS :"<<a<<endl;
        }
        else
        {
             cout<<"THE GREATEST NUMBER IS :"<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
             cout<<"THE GREATEST NUMBER IS :"<<b<<endl;
        }
        else
        {
             cout<<"THE GREATEST NUMBER IS :"<<c<<endl;
        }
    }
    
   
    return 0;

}