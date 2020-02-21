#include<bits/stdc++.h>
#define  mx  1000011
using namespace std; 
typedef long long ll;
ll isp[mx],indx[mx];
vector<ll>prime;
void seive()
{
	isp[0]=isp[1]=1;
	for(ll i = 2; i*i <= mx; i++)
	{
		if(isp[i]==0){
		for(ll j = i; j <= mx; j++)
		{
			if(i*j>mx)
				break;
			isp[i*j] = 1;
		}
      }
	}
	prime.push_back(2);
	for(ll i = 3; i <= mx; i+=2)
	{
		if(isp[i]==0)
			prime.push_back(i);
	}
}
void cal()
{
	seive();
	indx[1] = 0;
	for(ll i = 2; i <mx; i++)
	{
		indx[i] = indx[i-1];
		
			ll n = i;
			ll j = 0;
			
			while(isp[n]==1)
			{
				if(n%prime[j]==0)
				{
					n/=prime[j];
                    indx[i]++;
				}
				else
					j++;

			}
			if(isp[n]==0)
				indx[i]++;
     }
		
		
}
int main()
{
    cal();
	ll n;
	while(scanf("%lld",&n)!=EOF)
	{
       cout<<indx[n]<<endl;
	}
}