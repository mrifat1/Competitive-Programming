#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx = 5000002;
ll ar[5000002];

void phi()
{
    ar[0]=0;
    ar[1]=1;
    for(ll i = 2;i<mx;i++)
        ar[i] = i;

    for(ll i = 2;i< mx; i++)
    {
        if(ar[i]==i)
        {
            ar[i] = i-1;
            for(ll j = i+i; j < mx; j+=i)
            {
                ar[j] = (ar[j]/i) * (i-1);
            }
        }
    }
    for(ll i=1;i<mx;i++){
        //cout<<ar[i]<<endl;
      ar[i] = (ar[i-1]) + (ar[i]*ar[i]);

    }
}
int main()
{
    phi();
    ll n,t,i,j,k,l=0;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld%lld",&i,&j);

        printf("Case %lld: %lld\n",++l,ar[j]-ar[i-1]);
    }

}
