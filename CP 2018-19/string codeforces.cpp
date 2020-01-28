#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    int i,sum,sum2,flag,c;
    cin>>str>>str2;
    int len1;
    len1=str.size();
    for(i=0;i<len1;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i]=str2[i]+32;

    }
    str[i]=='\0';
    str2[i]=='\0';
    for(i=0;i<len1;i++)
    {
        //sum=(str[i]+0);
        //sum2=(str2[i]+0);
        if(str[i]>str2[i]){
            cout<<"1\n";
            break;
        }
        else if(str[i]<str2[i])
        {
            cout<<"-1\n";
            break;
        }
    }
    if(i==len1)
     cout<<"0\n"<<endl;
    return 0;
}
