#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,l,sum,sum2,i,j,k;

    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l))
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;


        k=0;
        for(i=0;i<=l;i++)
        {
            sum=0;
            sum=(a*(i*i))+b*i+c;

            if(sum%d==0)
                k++;
        }
        cout<<k<<endl;
    }
}
