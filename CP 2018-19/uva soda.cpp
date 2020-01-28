#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,f,c,d,sum;

    cin>>n;

    while(n--)
    {
        cin>>e>>f>>c;
        e=e+f;
        //d=e;
        sum=0;
        while(e>=c)
        {
            d=e/c;
            sum=sum+d;
            e=d+(e%c);
        }
        cout<<sum<<endl;
    }
}
