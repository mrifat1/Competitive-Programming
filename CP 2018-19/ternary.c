#include<stdio.h>
int main()
{
    long int c[100],n,a,b,j,i;
    while(scanf("%ld",&n)==1)
    {
         if(n<0)
       {
            break;
       }
       if(n==0)
        printf("0");
       i=0;
        while(n!=0)
        {
            a=n%3;
            n=n/3;
            c[i]=a;
            i++;
        }
        for(j=i-1;j>=0;j--)
        {
             printf("%ld",c[j]);
        }
        printf("\n");

    }
return 0;
}
