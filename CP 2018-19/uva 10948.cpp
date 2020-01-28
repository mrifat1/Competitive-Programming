#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;

ll n,i,j,c,MAX = 10000000;
ll ar[10000000];

void seive()
{
	i=2;
    ar[1]=1;
	while((i*i)<=MAX)
	{
		if(ar[i]!=1){
		for(j = 2; j <= MAX; j++)
		{
			if((i*j)>MAX)
				break;

			ar[i*j]=1;
		}
	}
	i++;
	}
}

int main()
{
	seive();
    while(cin>>n){

      if(n==0)
        break;

      c=0;
    
        for(i = 2; i < n; i++)
        {
            if(!ar[i] && !ar[n - i])
            {
                c=1;
                break;
            }

        }
        if(c)
            printf("%lld:\n%lld+%lld\n",n,i,n-i);
        else
            cout<<n<<":\n"<<"NO WAY!"<<endl;
  }
    
}
