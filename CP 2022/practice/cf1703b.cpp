#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector<bool>vec(26);
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(vec[s[i] - 'A']!=true){
            cnt++;
            vec[s[i] - 'A']=true;
            }
            /* code */
        }
        int minu = n - cnt;
        if(!minu)
        {
            cout<<n*2<<endl;
        }
        else{
            cout<<(cnt*2)+minu<<endl;
        }
        

    }
}