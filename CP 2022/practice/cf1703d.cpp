#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str[n];
        map<string,bool> find;
        for (int i = 0; i < n; i++)
        {
            cin>>str[i];
            find[str[i]] = true;
        }
        
        for (int i = 0; i < n; i++)
        {
            bool ans = false;
            for (int j = 1; j < str[i].length(); j++)
            {
                string s = str[i].substr(0,j);
                string ss = str[i].substr(j,str[i].length()-j);
                if(find[s] && find[ss])
                {
                    ans = true;
                    break;
                }
            }
            cout<<ans;  
            /* code */
        }
        cout<<endl;
        
        
    }
}