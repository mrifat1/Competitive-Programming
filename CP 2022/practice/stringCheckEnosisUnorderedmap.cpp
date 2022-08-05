#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int checkIndex(string str)
{
    unordered_map<char,int>wordFreq;
    //  for (i = 0; i < str.length(); i++)
    // {
    //     wordFreq[str[i]]=0;
    //     v[str[i]] = 0;
    // }

    for (int i = 0; i < str.length(); i++)
    {
        wordFreq[str[i]]++;
        // v[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(wordFreq[str[i]]==1)
            {
                return i;
            }
        // return wordFreq[str[i]];
        // cout<<wordFreq[str[i]]<<endl;
        /* code */
    }
    return -1;
    
    // unordered_map<char, int>:: iterator itr;
    // i = 0;
    // bool check = false;
    // for(itr = wordFreq.begin();itr!=wordFreq.end(); itr++)
    // {
    //     if(itr->second == 1)
    //     {
    //         cout<<itr->first<<endl;
    //         check = true;
    //         break;
    //     }
    //     i++;
    // }
    // if(check)
    // return v[i];
    // else
    // return -1;
    // // for(i = 0;i < str.length(); i++)
    // // {
    // //     if(wordFreq[str[i]]==1)
    // //         cout<<i<<endl;
    // // }
    // // return -1;

}
int main()
{
    string str;
    cin>>str;
    // checkIndex(str);
    cout<<checkIndex(str)<<endl;
    
    
}