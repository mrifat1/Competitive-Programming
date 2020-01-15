#include<bits/stdc++.h>
#define maxi  10001000
using namespace std;
typedef long long ll;
ll ar[maxi],ar2[maxi];
void prime()
{
	ar[1]=1;
	for(ll i=2;i*i<=maxi;i++)
	{
		if(ar[i]==0){
		for(ll j=2;i*j<=maxi;j++)
		{
			ar[i*j]=1;
		}
   	 }
	}
	ll j=0;
	for(ll i=2;i<=maxi;i++)
	{
		if(ar[i]==0){
		 ar2[j++]=i;
		}
	}
}
int main()
{
	prime();
	ll n;
	cin>>n;
	while(n--)
	{
		ll l,h;
		cin>>l>>h;
		ll a=sqrt(h);
		ll cnt=0;

		for(ll i=0;ar2[i]<=a;i++)
		{
				for(ll j=ar2[i];j<=h;j*=ar2[i])
				{
					if(j!=ar2[i] && j>=l && j<=h)
					{
						cnt++;
					}
				}
		}
		cout<<cnt<<endl;

	}
}