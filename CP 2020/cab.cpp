#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,t,n,m,o,p;

	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		a =  s.size();
		int cnt  = 0;
		int cnt2 = 0;
		p = 0;
		for(int i = 0; i < a; i++)
		{
			if(s[i]=='0' && cnt==1)
			{
				cnt2++;

			}
			else if(s[i]=='1' && cnt==0)
			{
				cnt = 1;

			}
			else if(s[i]=='1' && cnt==1)
			{
				p += cnt2;
				cnt2 = 0;
				
			}
		}
		cout<<p<<endl;
	}
}