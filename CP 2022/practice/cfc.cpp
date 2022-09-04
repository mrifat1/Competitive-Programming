#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // string s1[],s2,s3;
        unordered_map<string,int>wordMap;
        unordered_map<string,int>wordMap2;
        unordered_map<string,int>wordMap3;
        unordered_map<string,int>wordMapG;

        int n;
        cin>>n;
        
        int score1=0,score2=0,score3=0;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            wordMapG[s]++;
            wordMap[s]=i;
        }
        for (int i = 0; i < n; i++)
        {
            // cout<<wordMap[i]<<endl;
            cin>>s;
            wordMapG[s]++;
            wordMap2[s]=i;
        }
        for (int i = 0; i < n; i++)
        {
            // cout<<wordMap[i]<<endl;
            cin>>s;
            wordMapG[s]++;
            wordMap3[s]=i;
        }
        for(auto i: wordMap)
        {
            if(wordMapG[i.first] ==1)
            {
                score1+=3;
            }
            else if(wordMapG[i.first]==2)
            {
                score1+=1;
            }

        }
        for(auto i: wordMap2)
        {
            if(wordMapG[i.first] ==1)
            {
                score2+=3;
            }
            else if(wordMapG[i.first]==2)
            {
                score2+=1;
            }

        }
        for(auto i: wordMap3)
        {
            if(wordMapG[i.first]==1)
            {
                score3+=3;
            }
            else if(wordMapG[i.first]==2)
            {
                score3+=1;
            }

        }
        cout<<score1<<" "<<score2<<" "<<score3<<endl;

    }
    
}