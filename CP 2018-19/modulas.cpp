#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10001],b,n,ans,i,m;

    cin>>n;
    ans=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=(pow(10,9)+7);

    for(i=0;i<n;i++)
    {
        ans=((ans*(a[i]))%m);
    }
    cout<<ans<<endl;
}
