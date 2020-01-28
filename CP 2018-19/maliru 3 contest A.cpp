#include<bits/stdc++.h>
int b[101];
using namespace std;
int main()
{
    int n,t,l,s,a[101];
    int c[101],j,i;
    cin>>n;
    t=n;
    while(t--)
    {
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
    }
    for(i=0,j=0;i<101;i++)
     {
         if(b[i]==n)
         {
             c[j]=i;
             j++;
         }
     }
     sort(c,c+j);
     for(i=0;i<j-1;i++)
     {
         cout<<c[i]<<" ";
     }
     cout<<c[i]<<"\n";
}
