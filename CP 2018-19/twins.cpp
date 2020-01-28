#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[1001],i,sum,half,sum2;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    sort(ar,ar+n);
    half=sum/2;
    int cnt=0;
    sum2=0;
    for(i=n-1;i>=0;i--)
    {
        sum2=sum2+ar[i];
        cnt++;

        if(ar[i]>half)
        {
            cnt=1;
            break;
        }

         if(sum2>half)
            break;
    }
    cout<<cnt<<endl;

return 0;
}

