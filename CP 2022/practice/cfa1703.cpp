#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str2="yes";

        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s==str2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}