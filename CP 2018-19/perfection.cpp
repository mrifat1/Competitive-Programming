#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,k,l,st,ar[10010];
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }

        k=sqrt(n);
        j=0;
        int sum=0;
        for(i=1;i<=k;i++)
        {
            if((n%i)==0)
            {
                if(i==1)
                    ar[j++]=i;
                else if((n/i)==i)
                {
                    ar[j++]=i;
                }
                else
                {
                     ar[j++]=i;
                     ar[j++]=(n/i);
                }
            }
        }
        for(i=0;i<j;i++)
        {
            sum+=ar[i];
        }
        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
            printf("%5d  ABUNDANT\n",n);

    }
}
