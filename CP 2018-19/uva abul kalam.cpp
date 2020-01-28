#include<bits/stdc++.h>
using namespace std;
long long int primes[100],check[1000001];
typedef long long ll;
long long n,m,j,i,k,sum;
void seive()
{
    for(i = 2; i<=31; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <=31)
    {
        if (primes[i])
        {
            for(j=2; j<=311; j++)
            {
                if(i*j>31)
                    break;
                else
                    primes[i*j]=0;
            }
        }
        i++;
    }
}
int main()
{
    seive();
    while(cin>>n)
    {
        if(n==0)
            break;
    if(primes[n]!=0)
    {
        if(n!=11 && n!=23 && n!=29)
        {
            sum=pow(2,n-1)*(pow(2,n)-1);
            printf("Perfect: %lld!\n",sum);
        }
        else
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
    }
    else
        printf("Given number is NOT prime! NO perfect number is available.\n");

    }
}
