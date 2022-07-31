#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin>>str>>str2;

    sort(str.begin(),str.end());
    sort(str2.begin(),str2.end());

    if(str.length() != str2.length())
        cout<<"NO"<<endl;
    bool check =  true;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != str2[i]){
            cout<<"NO"<<endl;
            check = false;
            break;
        }
    }
    if(check)
    cout<<"YES"<<endl;
}