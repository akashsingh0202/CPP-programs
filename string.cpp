#include<iostream>
using namespace std;
int main()
{
    //string s="akash singh";
    string s1;
    cout << "size of string "<<sizeof(s1)<<endl;
    cout << "enter a string :";
    cin>> s1;//it takes only single word 
    getline(cin,s1);//it takes multiple value
    cout <<"name = "<<s1;
    return 0; 
}