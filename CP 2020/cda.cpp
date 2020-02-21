#include<bits/stdc++.h>
#define maxi  1100000000000
using namespace std;
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
typedef long long ll;

int main()
{
	ll n,k,i,j,l,m,t,a;
	cin>>n;
	k=sqrt(n);
	ll mini=n+1;
	if(n==1)
		cout<<"1 "<< "1"<<endl;
	else
	{
	for(i=1;i<=k;i++)
	{
		if(n%i==0)
		{
			l=lcm(i,(n/i));
			if(l==n){
				a=max(i,(n/i));
				if(a<mini)
				{
                   mini=a;
				}
			}
		}
	}
	cout<<n/mini<<" "<<mini<<endl;
   }
}