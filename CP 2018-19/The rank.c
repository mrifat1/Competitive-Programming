#include<stdio.h>
int main()
{
    int h,m,g,k,sum,i,a[100],n,sum1,c;

    scanf("%d",&n);

    scanf("%d%d%d%d",&h,&m,&g,&k);
    sum1=h+m+g+k;

    n=n-1;
    c=1;
    while(n--)
    {
        for(i=0,sum=0;i<4;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }

         if(sum1<sum)
            c++;
    }
    printf("%d\n",c);

    return 0;
}
