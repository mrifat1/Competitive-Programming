#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val=0,m,t;
    cin>>t;
    while(t--){
    cin>>m;
    n = m;
    val=0;
    while(n>0)
    {
        int tak = n%10;
        val = (val * 10)+tak;
        n = n/10;
    }
    if(val==m)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not"<<endl;
    }
}