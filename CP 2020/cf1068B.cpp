#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,i,j,k;
	cin>>n;
	j =  sqrt(n);
   
    ll cnt = 0;
	for(i = 1; i <= j; i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
				cnt++;
			else
				cnt+=2;
		}
	}
	cout<<cnt<<endl;

}