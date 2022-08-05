#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,ar[100010],sum=0;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
            sum = sum | ar[i];
            /* code */
        }
        cout<<sum<<endl;
        
    }
    // }
    // cout<<(2|0)<<endl;

}