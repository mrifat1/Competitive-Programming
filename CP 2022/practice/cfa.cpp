#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        bool check = true;
        cin>>s;
        string ss = "Timur";
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        if(s==ss)
        cout<<"YES"<<endl;
        else
        cout<<"No"<<endl;
        // if(n!=5)
        // cout<<"NO"<<endl;
        // else{
        //     int tt=0,ii=0,m=0,u=0,r = 0;
        //     for(int i = 0; i < n; i++)
        //     {
        //         // cout<<s[i]<<endl;
        //         if(s[i]=='T' && tt==0)
        //         {
        //             tt=1;
        //         }
        //         else if(s[i]=='i' && ii==0)
        //         {
        //             ii=1;
                    
        //         }
        //         else if(s[i]=='m' && m==0)
        //         {
        //             m=1;
                    
        //         }
        //         else if(s[i]=='u' && u==0)
        //         {
        //             u=1;
                    
        //         }
        //         else if(s[i]=='r' && r==0)
        //         {
        //             r=1;
                    
        //         }
               
        //     }
        //     if(tt+ii+m+u+r==5)
        //     cout<<"YES"<<endl;
        //     else
        //     cout<<"NO"<<endl;
        //     // if(s=="Timur" || s=="miurT" || s=="Trumi" || s=="mriTu")
        //     // cout<<"YES"<<endl;
        //     // else
        //     // cout<<"NO"<<endl;
        // }
    }
}