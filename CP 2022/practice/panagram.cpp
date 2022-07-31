#include<bits/stdc++.h>
using namespace std;
bool panagram(string& str)
{
    vector<bool>vec(26,false);
    int index;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            index = str[i] - 'A';
        
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }

        else
            continue;

        vec[index] = true;

    }

    for(int i = 0; i <= 25; i++)
    {
        if(vec[i] != true)
            return false;
    }
    return true;
}
int main()
{
    // char str[100];
    // scanf(" %[^\n]s",str);
    // string str = "We promptly judged"
    //              " antique ivory"
    //              " buckles for the next prize";
    string str;
    getline(cin,str);
    if(panagram(str))
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // cout<<str<<endl;
}