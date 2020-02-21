#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		string s,v;
		cin>>n;
		cin>>s;
		int cnt = 0;
		for(int i=0;i<n;i++)
 		{
 			if((s[i]-'0')%2)
 			{
 				v.push_back(s[i]);
 				cnt++;
 			}
 			if(cnt==2)
 				break;
 		}
 		if(cnt<2)
 			cout<<"-1"<<endl;
 		else
 			cout<<v<<endl;
	}
}