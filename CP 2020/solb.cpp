#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100100];
int main()
{
	ll n,t,a,b,c,d;
	cin >> t;
	while(t--)
	{
		cin>>n;
		ll nn = (2*n);
		vector<ll>v;
		for(ll i=0;i<nn;i++)
		{
			cin>>b;
			v.push_back(b);
		}
		sort(v.begin(),v.end());
		a = v[n]-v[n-1];
		cout<<a<<endl;

	}
}