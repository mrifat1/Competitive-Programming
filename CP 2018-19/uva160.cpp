#include<bits/stdc++.h>
using namespace std;
int MAX = 100000;
int ar[100000],cnt[100000],i,j;

void seive()
{
	ar[1]=1;
	i = 2;
	while(i*i<=MAX)
	{
		if(ar[i]==0){
			for(j = 2; j <= MAX; j++)
			{
				if(i*j>MAX)
					break;

				ar[i*j] = 1;
			}
		}
		i++;
	}
}
int main()
{
   seive();
   int n;
   while(scanf("%d",&n))
   {
   	if(n==0)
   		break;
   int store;
   memset(cnt,0,sizeof(cnt));
   	for( i = 2; i <= n; i++)
   	{
   		store = i;
   		 j = 2;

   		while(store!=1)
   		{
   			if(store%j==0 && ar[j]==0)
   			{
   				store/=j;
   				cnt[j]++;
   			}
   			else
   				j++;
   		}
   	}

   	int c = 0;
   	printf("%3d! =",n);
   	for( i = 2; i <= n; i++)
   	{
   		if(cnt[i])
   			c++;

   		if(c>15)
   		{
   			c-=15;
   			printf("\n      ");
   		}
   		if(cnt[i])
   			printf("%3d",cnt[i]);

   	}
   	puts("");
   }

}