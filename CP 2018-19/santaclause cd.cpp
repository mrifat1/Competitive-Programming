#include<bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{
    char str[1000],str2[200],str3[1000],cnt,m;
    int n,i,j,s;
    cin>>str>>str2>>str3;

    strcat(str,str2);
    n=strlen(str);
    m=strlen(str3);
    j=0;
    cnt=0;
    s=600;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i]==str3[j] && ar[j]==0)
            {
                cnt++;
                ar[j]=1;
                break;
            }

        }
    }
    if(cnt==m && n==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
