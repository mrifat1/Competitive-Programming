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
	   unordered_map<int,bool>mp;
    //    vector<int>vc[n];
        int vc[n];
        memset(vc,0,sizeof(vc));
       int ar2[n];
        // std::vector<int>::iterator it;
	    for(int i = 0; i < n; i++)
	    {
	        cin>>dem;

	        // mp[dem]=true;
            ar2[i]=dem;
            vc[dem]=1;

	    }
	    cin>>k;
	    int ar[k+5],dem2;
        vector<int>v;
	    for(int i=0;i<k;i++)
	    {
	        cin>>ar[i];
	        // if(mp.find(ar[i]) != mp.end())
	        // {
	        //     mp.erase(ar[i]);
	        // }
        //   mp.erase(ar[i]);
            vc[ar[i]]=0;
	    }
      for(int i=0;i<n-1;i++)
      {
        if(vc[ar2[i]])
        cout<<ar2[i]<<" ";
      }
  
if(vc[ar2[n-1]]==0)
    cout<<"\n";
    else
    cout<<ar2[n-1]<<endl;
        
	    
	}
	return 0;
}
