#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sol;
    cin>>n;
    string s = to_string(n);
    string ss = "";
    int len = s.size();
    // cout<<s[0]<<endl;
    for(int i = 0; i < len; i++)
    {
        ss += s[0];
    }
    int fdig;

    char ch = s[0];
    fdig = ch - '0';
    // cout<<fdig<<endl;
    stringstream ( ss ) >> sol;
    if(sol >= n)
    {
        cout<<sol<<endl;
    }
    else{
        if(s[0] == '9')
        {
            for(int i = 0; i <= len; i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
            for(int i = 0; i < len; i++)
            {
                cout<<fdig+1;
            }
            cout<<endl;
        }
    }
    

}
