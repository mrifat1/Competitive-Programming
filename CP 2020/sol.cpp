#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,ar[1000],zero=0;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int sum = 0;
		zero = 0;
		for(int i = 0; i < n; i++)
		{
			cin>>ar[i];
			if(ar[i]==0)
				zero++;

			sum+=ar[i];
		}
		sum+=zero;
		if(sum!=0)
		{
			cout<<zero<<endl;
		}
		else 
		{
			cout<<zero+1<<endl;
		} 
		
	}
}
