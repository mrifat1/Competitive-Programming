#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10001],a[10001];
    int n,j=1,i;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        cin>>ar[i];
        a[j++]=ar[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n)
            {
                if(a[j]==i)
                 cout<<j<<endl;
            }
            else
            {
                if(a[j]==i)
                  cout<<j<<" ";
            }
        }
    }
}
