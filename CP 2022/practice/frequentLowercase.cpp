#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    unordered_map<char,int>freq;
    char chars[2];
    char c3;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        freq[str[i]]++;
        /* code */
    }
    int max,secMax,maxIndex,secMaxIndex;
    if(freq[str[0]] >= freq[str[1]]){
        max = freq[str[0]];
        secMax = freq[str[1]];
        maxIndex = 0;
        secMaxIndex = 1;
        chars[0] = str[0];
        chars[1] = str[1];

    }
    else{
        max = freq[str[1]];
        secMax = freq[str[0]];
        maxIndex = 1;
        secMaxIndex = 0;
        chars[0] = str[1];
        chars[1] = str[0];
    }
    for(int i = 2; i < str.length(); i++)
    {
        if(freq[str[i]] > max)
        {
            max = freq[str[i]];
            chars[0] = str[i];
            chars[1] = str[maxIndex];
            maxIndex = i;
        }
        else if(freq[str[i]]>secMax)
        {
            secMax = freq[str[i]];
            chars[1] = str[i];
        }
    }
    cout<<chars[0]<<" "<<chars[1]<<endl;
    
}