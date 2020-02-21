#include<bits/stdc++.h>
using namespace std;
const int FLAG_SIZE = 1001000;
const int PRIME_SIZE = 80000;

typedef long long ll;
bool flag[FLAG_SIZE];
int prime[PRIME_SIZE];
void sieve()
{
    int ind = 1,i,j;
    ll d;

    prime [ ind++ ]  = 2;

    for(i=3;i<FLAG_SIZE;i+=2)
    {
        if(flag[i] == false)
        {
            prime[ind++]=i;

            if(i > FLAG_SIZE/i) ///cause i*i > FLAG_SIZE
                continue;

            for(j=i*i,d=i+i;j<=FLAG_SIZE;j+=d)
                flag[j]=true;
        }
    }
    for(i=1;i<1000;i++)
        cout<<prime[i]<<endl;

}
int main()
{
    sieve();
}
