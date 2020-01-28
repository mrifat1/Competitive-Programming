#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if((n%2!=0 && m>n)||(m%2!=0 && n>m)||(n%2!=0 && m%2!=0))
	      cout<<"Saddam"<<endl;
	      else
	       cout<<"Sudipto"<<endl;
	}
}
