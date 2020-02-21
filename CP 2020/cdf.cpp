#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{

    mp['B']=1;
    mp['F']=1;
    mp['P']=1;
    mp['V']=1;
    mp['C']=2;
    mp['G']=2;
    mp['J']=2;
    mp['K']=2;
    mp['Q']=2;
    mp['S']=2;
    mp['X']=2;
    mp['Z']=2;
    mp['D']=3;
    mp['T']=3;
    mp['L']=4;
    mp['M']=5;
    mp['N']=5;
    mp['R']=6;


    string ss;

    while(cin>>ss)
    {
        int len=ss.size();

        if(mp[ss[0]]!=0) 
            cout<<mp[ss[0]];
        for(int i=1;i<len;i++)
        {
            if(mp[ss[i]]!=0&&((mp[ss[i]]!=mp[ss[i-1]]))) 
                cout<<mp[ss[i]];

        }


        cout<<endl;
    }
    return 0;
}