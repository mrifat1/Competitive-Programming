#include<stdio.h>
int main()
{
    int i,j,a,n,d;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        d=0;
        for(j=1;j<=13;j++)
        {
            scanf("%d",&a);
            if(a!=0)
                d++;
        }
        if(d==13)
            printf("Set #%d: Yes\n",i);
        else
            printf("Set #%d: No\n",i);
    }
    return 0;
}

