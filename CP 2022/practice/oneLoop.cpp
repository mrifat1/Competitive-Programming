#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i = 1; i < n+(n-1); i++)
    {
        if(i<=n)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<n+(n-i)<<" ";
        }
    }
    cout<<n+(n-i)<<endl;


}