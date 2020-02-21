#include <bits/stdc++.h>
using namespace std;
long long int primes[1000000];
typedef long long ll;
ll n,m,j,i,k;
void seive(int n)
{
    for(i = 2; i<=n; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= n)
    {
        if (primes[i])
        {
            for(j=2; j<=n; j++)
            {
                if(i*j>n)
                    break;
                else
                    primes[i*j]=0;
            }

        }
        i++;
    }
    for(i=2;i<=n;i++)
    {
        if(primes[i]!=0)
        {
            cout<<primes[i]<<endl;
            k++;
        }
    }

}
int main()
{
    ll n;
    cin>>n;
    seive(n);
    /*for(i = 2; i<=n; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            printf("%d ",primes[i]);
    }*/

}
