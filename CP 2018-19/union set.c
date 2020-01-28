#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k;
     printf("First array : ");
    for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
     c[i]=a[i];
    }
    printf("Second array : ");
    for(j=0,k=5;k<10;j++,k++)
    {
        scanf("%d",&b[j]);
        c[k]=b[j];
    }
    for(k=0;k<10;k++)
    {
        printf("%d",c[k]);
    }
return 0;
}
