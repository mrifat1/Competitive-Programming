#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,m,k,l,i,j;
	cin>>t;
	while(t--)
	{
		string s;
		std::vector<char>sss;
		ll sum = 0;
		cin>>n;
		cin>>s;
		l = s.size();
		ll even=0;
		ll odd=0;
		for(i=0;i<l;i++)
		{
			sum+= (s[i]-'0');
			if((s[i]-'0')%2==0)
				even++;
			else
				odd++;
		}
		if(sum%2==0 && sum!=0){
		  if((s[l-1]-'0')%2!=0)
		  {
		  	cout<<s<<endl;
		  }
		  else
		  {
           
		  	ll ss = sum;
		  	if(even==l)
		  		cout<<"-1"<<endl;
		  	else{
		  		ll cn = 0;
		  	for(i=l;i>=0;i--)
		  	{
              if((s[i]%2==0) && cn==0)
              {
              	continue;
              }
              else
              {
              	sss.push_back(s[i]);
              	cn=1;
              }
		  	}
		  	ll szz = sss.size();
		  	for(i=szz-1;i>0;i--)
		  	{
		  		cout<<sss[i];
		  	}
		  	cout<<sss[0]<<endl;
		  }
		  }
       }
       else if(sum%2!=0 && sum!=0)
       {
       	if(l==2 || l==1 || odd==1)
       		cout<<"-1"<<endl;
       	else
       	{
       		//cout<<l<<endl;
       		ll cnt2=0;
       		j=0;
       		for(i=l-1;i>=0;i--)
       		{
       			if((s[i]-'0')%2==0 && i==l-1)
       			{
       				continue;
       			}
       			else if((s[i]-'0')%2==0 && cnt2==0)
       			{
       				continue;
       			}
       			else{
       				sss.push_back(s[i]);
       				cnt2=2;
       			}
       		}
       		
       		ll cnt=0;
       		ll sz = sss.size();
       		for(i=sz-1;i>=0;i--)
       			{

       				if((sss[i]-'0')%2!=0 && cnt==0 )
       				{
       					if(i==sz-1 && (sss[i-1]-'0')!=0)
                           cnt=1;
                       else if(i==sz-1 && (sss[i-1]-'0')==0)
                       	 cout<<sss[i];
                       else	if(i!=sz-1 && (sss[i-1]-'0')==0)
                       {
                       	cnt=1;
                       }
                       else if(i!=sz-1 && (sss[i-1]-'0')!=0)
                       	 cnt=1;
       				}
       				else
       					cout<<sss[i];
       			}
       			cout<<endl;
       	}
       }
       else if(sum==0)
       	cout<<"-1"<<endl;
	}
	
}