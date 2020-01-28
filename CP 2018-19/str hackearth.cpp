#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101],a[101];

    int i,n;

    cin>>s;


    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            a[i]=s[i]-32;
        }
        else
        {
            a[i]=s[i]+32;
        }
    }
    a[i]='\0';
    cout<<a;
}
