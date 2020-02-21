#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll a,b,c,d,e,x,f,i,j,y;
int main()
{
	ll t,n,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		ll  flag = 0;

		a = sqrt(d);
		for(i = 1; i <= a; i++)
		{
			b = i + (d/(i+1));

			if((d%(i+1))!=0 && d>n)
				b+=1;

			if(b<=n)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
}