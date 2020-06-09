#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,c,d,n,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<b || a==b)
			cout<<b-a<<endl;

		else if(a%b==0)
		  cout<<"0"<<endl;

	    else
	    {
	    	n = a/b;

	    	d = ((n+1)*b)-a;

	    	cout<<d<<endl;
	    }
	}
	
}