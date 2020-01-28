#include<stdio.h>
int main()
{
    int n,m,a[5001],c,j,flag,i,d,p,s;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        c=0;
      for(i=n;i<=m;i++)
    {
        j=0;
        p=i;
        while(p>=10)
        {
            a[j]=p%10;
            p=p/10;
            j++;
        }
        a[j]=p;
        for(s=0,flag=1;s<j;s++)
        {
            if(flag==0)
                break;
            for(d=s+1;d<=j;d++)
            {
                if(a[s]==a[d])
                {
                    flag=0;
                }
            }
        }
        if(flag==1)
            c++;
    }
     printf("%d\n",c);
    }
   return 0;
}
