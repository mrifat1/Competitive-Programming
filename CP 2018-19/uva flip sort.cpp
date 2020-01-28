#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ar[10001],c,j;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        c=0;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(ar[j]>ar[i])
                    c++;
            }
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
}
