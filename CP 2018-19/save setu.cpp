#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    long int m,i,n,a,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(strcmp(s,"donate")==0)
        {
            cin>>m;
            sum=sum+m;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
}
