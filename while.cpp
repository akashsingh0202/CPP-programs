//wap to print reverse number of given number 
#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout <<"ENTER A NUMBER:";
    cin>>num;
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"REVERSE NUMBER IS:"<<rev;
    return 0;
}