#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll a,b,c,d,t,n;
	ll ar2[100010],ar[100010];
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll neg = 0;
		memset(ar2,0,sizeof(ar2));
		for(ll i = 0;i < n; i++)
		{
			cin>>ar[i];
			if(ar[i]==-1)
				neg++;
		}
		ll cnt  = 0;
		ll store = 0;
		ll j = 0;
		ll store2 = 0;
		d = 0;
		ll occ = 0;
		for(ll i = 0;i < n; i++)
		{
			if(ar[i]!=-1 && cnt==0)
			{
				store = ar[i];
				d = 1;
			}
			else if(ar[i]==-1 && d>0 )
			{
				cnt = 1;
			}
			else if(ar[i]!=-1 && cnt==1)
			{
				store2 = ar[i];
				ar2[j++] = (store+store2)/2;
				store = store2;
				cnt=0;
				occ = 1;
			}
		}
		ll max = 0;
		if(occ==1){
		sort(ar2,ar2+j);
	    
		for(ll i = 0;i < n; i++)
		{
			if(ar[i]==-1)
				ar[i]=ar2[j-1];
		}
		
		for(ll i = 0;i < n-1;i++)
		{
			c = abs(ar[i]-ar[i+1]);
			if(c>max)
				max=c;
		}
	  }
		
		if(neg==n)
			cout<<"0 "<<"42"<<endl;
		else if(max==0 && occ==0)
			cout<<"0 "<<"0"<<endl;
		else
		cout<<max<<" "<<ar2[j-1]<<endl;
	}
	
}