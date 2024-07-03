#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int num=n;
    // to find no of digit
    int nd;
    while(num!=0)
    {
        num=num%10;
        nd++;
    }
    // to calculate sum of digit raised to power(nd)
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+pow(digit,nd);
    }
    // comparison 
    if(sum=n)
        cout<<"armstrong number";
    else
        cout<<"not armstrong number";
    return 0;
}