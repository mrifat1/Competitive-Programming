#include<bits/stdc++.h> 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
 
#define mx 1000001
vector <long long> prime;
ll isp[mx+1];


void seive()
{
	isp[0]=isp[1]=1;

	for(ll i = 2; i*i < mx; i++)
	{
		if(isp[i]==0){
		for(ll j = i; i*j < mx; j++)
		{
			isp[i*j] = 1;
		}
	  }
	}
	prime.push_back(2LL);
	for(ll i=3;i<=mx;i+=2)
	{
		if(isp[i]==0)
			prime.push_back(i);
	}

}
//finding coprime for value passes from main function
ll copr(ll n)
{
	
	ll cc = n;

	ll sz  = prime.size();

	for(ll i = 0;i < sz && prime[i]*prime[i] <= n; i++)
	{
		if(n%prime[i]==0)
		{
			while(n%prime[i]==0)
			{
				n/=prime[i];
			}
			cc -= (cc/prime[i]);
		}

	}
	if(n>1)
		cc -= (cc/n);

	return cc;
}
int main()
{
	
    seive();
	ll n,t,i,j;
	cin>>t;
	while(t--)
	{
		cin>>i>>j;
		n = gcd(i,j);
		cout<<copr(j/n)<<endl;

	}


}