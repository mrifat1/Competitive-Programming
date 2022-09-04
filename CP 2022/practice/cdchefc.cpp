#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    unordered_map<int,int>mp;
	    for(int i = 0; i < n; i++)
	    {
	        cin>>k;
	        mp[k]++;
	    }
	    int cnt = 0;
	    int cnt2 = 0;
	    for(auto i: mp)
	    {
	        if(i.second == 1)
	        {
	            cnt+=i.second;
	            
	        }
	        else if(i.second>1)
	        {
	            cnt2+=1;
	        }
	    }
        if((cnt+cnt2) % 2==0)
        {
            cout<<"YES"<<endl;
        }
        else {
            
            if(cnt2==0 && cnt%2){
                cout<<"No"<<endl;
            }
            else {
                cout<<"YES"<<endl;
                 
            }
        }

	    
	}
	
	return 0;
}
