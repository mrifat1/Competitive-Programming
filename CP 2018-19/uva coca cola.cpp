#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,f,c,d,sum;

    while(scanf("%d",&e)==1)
    {
        if(e==0)
            break;

        //d=e;
        sum=0;
        f=e;
        while(e>=3)
        {
            d=e/3;
            sum=sum+d;
            e=d+(e%3);
        }
        if(e==2)
            sum++;
        cout<<sum+f<<endl;
    }
}

