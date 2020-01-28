#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,b,c,d,h,i,j,ar[10001];
    float sum=0,st,ans,e,g,f;

    cin>>d;
    while(d--)
    {
       cin>>e;
       ans=0;
       sum=0;
       f=0;
       for(i=0;i<e;i++)
       {
           cin>>ar[i];
           sum+=ar[i];
       }
       g=sum/e;
       st=100/e;
       for(i=0;i<e;i++)
       {
           if(ar[i]>g)
           {
               //ans+=st;
               f++;
           }
       }
       ans=(100*f)/e;
       printf("%.3f%%\n",ans);
    }
}
