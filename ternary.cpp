#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ans;
    cout<<"ENTER THREE NUMBER :";
    cin>>a>>b>>c;
    ans=(a>b)?(a>c?a:c):(b>c?b:c);
    cout<<"GREATSET NUMBER IS :"<<ans;
    return 0;
}