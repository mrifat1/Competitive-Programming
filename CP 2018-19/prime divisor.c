#include <stdio.h>
int main()
{
    long long int n,i,j,l,b,flag;
    //printf("Enter the number\n");
    n=100000;
    long int primes[n+1];
    for(i = 2; i<=n; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= n)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<=n; j++)
            {
                if(primes[i]*j>n)
                    break;
                else
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

   while(scanf("%lld",&b)!=EOF)
   {
    l=0;
    flag=0;
    if(b%2==0)
    {
        flag=1;
        l=b/2;
    }
    else{
    for(i=1;i<=b/i;i++)
    {
     if(primes[i]!=0){
      if(b%primes[i]==0)
    {
        flag=1;
        b=b-primes[i];
        l=(b/2)+1;
        break;
    }
    }
    }
    }
    if(flag==1)
     printf("%lld\n",l);
     else
        printf("1\n");
     }
    return 0;
}
