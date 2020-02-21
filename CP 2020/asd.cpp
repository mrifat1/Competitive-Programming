#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t,ar[10000],i,j,k,l,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)
		{
			cin>>ar[i];
		}
		d = m;
		for(i=2;i<=n;i++)
		{
			if(d<(1+(i-2)))
				break;

			j = ar[i];
			while(j!=0)
			{
				ar[1]+=1;
				j--;
				d-=(1+(i-2));
				if(d<(1+(i-2)))
					break;
			}
		}
		cout<<ar[1]<<endl;
	}
}