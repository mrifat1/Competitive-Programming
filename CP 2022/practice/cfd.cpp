#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >>s;
        vector<ll> v,ans;
        ll score =0;
        for(ll i=0;i<n;i++){
            if(s[i] =='L'){
                score +=i;
            }
            else{
                score +=(n-1-i);
            }
            if(s[i]=='L' && (i<(n-1-i))){
                v.push_back(n-1-2*i);
            }
            else if(s[i]=='R' && i>(n-1-i)){
                v.push_back(2*i+1-n);
            }
        }
        // cout<<score<<endl;
        sort(v.rbegin(),v.rend());
        ll sum =0;
        for(ll i=0;i<v.size();i++){
            sum +=v[i];
            ans.push_back(score+sum);
            cout<<v[i]<<endl;
        }
        
        for (ll i=v.size();i<n;i++){
            ans.push_back(score+sum);
        }
        for (ll x:ans){
            cout << x<<" ";
        }
        cout << endl;
        
    }
    
    return 0;
}