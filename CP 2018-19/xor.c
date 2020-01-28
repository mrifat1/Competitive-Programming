#include<stdio.h>
int main()
{
    long int x,a,l,s,d;
    int q;
    scanf("%d",&q);
    for(s=1;s<=q;s++)
    {
        scanf("%ld",&x);
        a=1;
        d=0;
        while(a<x)
        {
            l=a^x;
            a++;
            if(l>x)
            {
                d=d+1;
            }
        }
        printf("%ld\n",d);
    }
return 0;
}
