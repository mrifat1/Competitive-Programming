#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k,l,h,cnt,a,b,c,d,ar[1000];
int main()
{
	string s,s1;
	cin>>s>>s1;
	a=s.size();
	b=s1.size();
	l=0;
	ll cnt2=0;

        for(j=0;j<a;j++)
        {
            cnt=0;
            cnt2=0;
            h=j;
            for(k=0;k<b;k++)
            {
                if(s[j]==s1[k])
                {
                    cnt++;
                    j++;

                }
                if(j==n)
                	break;
                else if(s[j]!=s1[k] && cnt>0)
                {
                    cnt2=max(cnt,cnt2);
                    j=h;
                    cnt=0;
                }

            }

             cnt2=max(cnt,cnt2);
             ar[l++]=cnt2;
             j=h;

        }
        for(i=0;i<l-1;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<ar[l-1]<<endl;


}