#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,s;
    int t,i,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        a=n;
        b=0;
        while(1)
        {
            s=0;
            while(n!=0)
            {
                s= s*10+n%10;
                n/=10;
            }
            if(s==a)
                break;
            else
            {
                n=s+a;
                a=n;
                b++;
            }
        }
        printf("%d %lld\n",b,s);
    }
    return 0;
}
