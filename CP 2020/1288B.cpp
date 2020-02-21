#include<bits/stdc++.h>
#define FasterIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
int main()
{
	FasterIO

	ll t,a,b,c,d,e,f,i,j;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		d = b;
		ll cnt=0;
		while(d)
		{
			d/=10;
			cnt++;
		}
		ll aa = pow(10,cnt);
		if(aa-1>b)
			cnt--;

        cout<<cnt*a<<endl;
       
 	}


}