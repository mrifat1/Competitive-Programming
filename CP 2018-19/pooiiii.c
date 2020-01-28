#include<stdio.h>
int main()
{
    int var[100],*ptr,n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&var[i]);

    ptr = &var[n-1];
    for(i=n-1;i>=0;i--,ptr--)
    {
        printf("Address of [%d]: %x\n",i,ptr);
        printf("Value of [%d]: %d\n",i,*ptr);
    }
    return 0;
}
