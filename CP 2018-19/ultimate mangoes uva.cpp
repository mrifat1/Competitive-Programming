#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,a[100],b[100],sum,sum2,flag,tc=0,i;

    cin>>t;
    while(t--)
    {
        sum=0;
        sum2=0;
        flag=0;
        cin>>n>>l;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        if(sum>l)
            cout<<"Case "<<++tc<<": NO"<<endl;
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>b[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            cout<<"Case "<<++tc<<": NO"<<endl;
            else
                cout<<"Case "<<++tc<<": YES"<<endl;

        }
    }
}
