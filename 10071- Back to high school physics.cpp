#include<stdio.h>
int main()
{
    int s,v,t;

    while(scanf("%d%d",&v,&t)==2)
    {
        s=v*t;
        printf("%d\n",2*s);
    }
    return 0;
}
