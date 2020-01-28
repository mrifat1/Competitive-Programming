#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a[100],n,l,i,j,c,d,cs=0;

    cin>>n;
    while(n--)
    {
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a[i];
        }
        for(i=0,c=0,d=0;i<l-1;i++)
        {
            if(a[i+1]>a[i])
                c++;
            else if(a[i+1]<a[i])
                d++;
        }
        cout<<"Case "<<++cs<<": "<<c<<" "<<d<<endl;
    }
}

