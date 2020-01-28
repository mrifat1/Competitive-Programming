#include<stdio.h>
int main()
{
    int t;
    int n,a[100000],b[100000],i,j;

      scanf("%d",&t)
      for(i=0;i<t;i++)
      {
          scanf("%d",&n);
          n=n-1;
          for(i=0;i<n;i++)
          {
              for(j=0;j<=i;j++)
              {
                  scanf("%d",&a[i][j]);
              }

          }

      }

}
