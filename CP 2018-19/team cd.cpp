#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,d=0,sum;

    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;

        sum=a+b+c;
        if(sum>1)
            d++;
    }
    cout<<d<<endl;
}
