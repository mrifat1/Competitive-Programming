#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[11],t,i,x=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        cout<<"Case "<<++x<<": "<<a[n/2]<<endl;
    }
}
