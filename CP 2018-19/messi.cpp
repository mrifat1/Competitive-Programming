#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,yes,no,m,r,i,tc=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        yes=0;
        no=0;
        m=0;
        r=0;
        int len=s.size();
        for(i=0;i<len;i++)
        {
            if(s[i]=='M')
            {
                if(r<3 && r>0)
                {
                    no=1;
                    break;
                }
                else
                    m++;

            }
            else if(s[i]=='R')
            {
                if(m<3 && m>0)
                {
                     no=1;
                     break;
                }
                else
                    r++;

            }
        }
        if(s[0]=='M' && m>=3 && r<3)
            cout<<"Case "<<++tc<<": "<<"Messi"<<endl;
        else if(s[0]=='R' && r>=3 && m<3)
            cout<<"Case "<<++tc<<": "<<"Ronaldo"<<endl;
        else if((s[0]=='M'||s[0]=='R') && r>=3 && m>=3)
            cout<<"Case "<<++tc<<": "<<"Both"<<endl;
            else
                cout<<"Case "<<++tc<<": "<<"None"<<endl;

    }
}
