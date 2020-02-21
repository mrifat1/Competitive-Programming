#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll colored[1000];
int main()
{
    ll a,b;
    cin>>a;
    while(a--)
    {
    	vector<int> v[201];
    	memset(colored,0,sizeof(colored));

    	ll n,e,nd,ed;
    	cin>>n>>e;
    	for(ll i=0;i<e;i++)
    	{
    		cin>>nd>>ed;
    		v[nd].push_back(ed);
    		v[ed].push_back(nd);
    	}
        
        
        ll cnt=0;
        ll one=0,two=0,f=0;

        for(ll j=0;j<n;j++){

    	queue<int>q;
    	one=two=f=0;

	
    	if(colored[j]==0){
    	colored[j]=1;
    	one++;
    	q.push(j);
    	}
        else 
        	continue;
    	
    	while(!q.empty())
    	{
    		ll l;
    		l=q.front();
    		q.pop();
    		for(ll i=0;i<v[l].size();i++)
    		{
                ll vv=v[l][i];
                if(colored[vv]==0)
                {
                	colored[vv]=3-colored[l];
                	if(colored[vv]==1)
                		one++;
                	else
                		two++;

                	q.push(vv);
                }
                else if(colored[vv]==colored[l])
                {
                   f=1;
                   break;
                }
    		}
    		if(f==1)
    			break;	
    	}

    	
        ll h = min(one,two);
        if(h==0)
        	h=1;
    	cnt+= h;
    	if(f==1){
    		cout<<"-1"<<endl;
    		break;
    	}
    }
    if(f==0)
    {
    	cout<<cnt<<endl;
    }

  }

}
