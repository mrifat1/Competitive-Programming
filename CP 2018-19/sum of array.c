#include<stdio.h>
int main()
{
    int a[100],b[100],n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]+b[j]);
    }
    return 0;
}
