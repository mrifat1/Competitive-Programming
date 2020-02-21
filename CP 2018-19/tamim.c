#include<stdio.h>
int main()
{
    int n,m,a=0,i=1;

    while(scanf("%d%d",&n,&m) != EOF)
    {
        a = (((m-1)*6)*(n-1))+((n-1)*3)+(m*6) ;
        printf("Case %d: %d\n",i,a);
        i++;
    }
    return 0;
}
