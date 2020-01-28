#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,sum,sum2,sum3,i=0;

    while(scanf("%d%d",&r,&n)==2)
    {
        sum=0;
        sum2=0;
        sum3=0;
        if(r==0||n==0)
        break;

    sum=r-n;
    sum2=sum/n;
    sum3=sum%n;

    if(sum3>0)
    {
        sum2=sum2+1;
        if(sum2>26)
        {
        cout<<"Case "<<++i<<": "<<"impossible"<<endl;
        }
      else
        cout<<"Case "<<++i<<": "<<sum2<<endl;
    }
    else if(sum2>26)
        cout<<"Case "<<++i<<": "<<"impossible"<<endl;

    else
        cout<<"Case "<<++i<<": "<<sum2<<endl;

    }



}
