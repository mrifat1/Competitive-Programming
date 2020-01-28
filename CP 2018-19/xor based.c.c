#include<stdio.h>
int main()
{
    int i,j,n,e,a,b;

    while(scanf("%d%d",&i,&j) != EOF)
    {
        a=i;
        b=j;
         if(i>j)
        {
            i=i^j;
            j=i^j;
            i=i^j;
        }
        int d,c,m=0;
        while(i<=j)
        {
          d=1;
          c=0;
          n=i;


           while(n!=1)
           {
               if(n%2==1)
             {
                n=(3*n) + 1;
                n/=2;
                d+=2;
             }
             else
             {
                  n/=2;
                  c++;
             }
           }
           e=d+c;
           if(e>m)
            m=e;
           i++;
        }
        printf("%d %d %d\n",a,b,m);
   }

  return 0;
}
