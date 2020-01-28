#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,ar[100010],i,j,cnt;
	while(scanf("%d",&n))
	{
		if(n==0)
			break;
		h=0;
		int sum = 0;
		cnt = 0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
			sum+=ar[i];
		}
		j = sum/n;

		for(i=0;i<n;i++)
		{
			if(ar[i]>j)
				cnt+= (ar[i]-j);
		}
		cout<<"Set #"<<++h<<endl;
		cout<<"The minimum number of moves is "<<cnt<<"."<<endl;
	}

}