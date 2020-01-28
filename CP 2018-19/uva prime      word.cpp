#include<bits/stdc++.h>

#define max 2000001
int prime[max+1];
void sieve();

using namespace std;
int main()
{
    sieve();

    int i,sum,len,c,x;
    char a[30];
    while(cin >> a)
    {
        len=strlen(a);
        sum=0;
        x=0;
        for(i=0,c=0;i<len;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                c=a[i]-38;
                sum=sum+c;
            }

            else
            {
                c=a[i]-96;
                sum=sum+c;
            }
        }

        if(prime[sum]==false)
            cout<< "It is a prime word." << "\n";
        else
            cout<< "It is not a prime word." << "\n";
    }

    return 0;
}
void sieve()
{
    long long i,j,root;
    root=sqrt(max);
    prime[0]=true;
    //prime[1]=true;
    for(i=2;i<=root;i++)
    {
        for(j=i*i;j<=max;j+=i)
        {
            if(prime[j]==false)
            {
                prime[j]=true;
            }

        }
    }
}
