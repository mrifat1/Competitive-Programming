#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,dem;
	    cin>>n;
	   unordered_map<int,int>mp;
        // std::vector<int>::iterator it;
	    for(int i = 0; i < n; i++)
	    {
	        cin>>dem;

	        mp[i]=dem;
	    }
	    cin>>k;
	    int ar[k+5],dem2;
	    for(int i=0;i<k;i++)
	    {
	        cin>>ar[i];
	        // if(mp.find(ar[i]) != mp.end())
	        // {
	        //     mp.erase(ar[i]);
	        // }
        //   mp.erase(ar[i]);
            
	    }
       cout<<mp.size()<<endl;
    //    for(int i=0;i<mp.size();i++)
    //    {
    //     cout<<mp[i]<<endl;
    //    }
    for(auto i = mp.begin();i!=mp.end();i++)
    cout<<i->second<<" ";

    cout<<"\n";
        
	    
	}
	return 0;
}
