#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[100001],b,i;
int main()
{
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        if(i==0)
        b+=a[0]-1;
        else
        {
            if(a[i]<a[i-1])
            {
                b+=(n-a[i-1])+(a[i]-1)+1;
            }
            else
            {
                b+=a[i]-a[i-1];
            }
        }
    }
    cout<<b<<endl;
}
