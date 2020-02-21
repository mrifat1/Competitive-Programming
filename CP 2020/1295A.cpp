#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i;
	cin>>t;
	while(t--){
	cin>>n;
	if(n%2==0)
	{
		for(i=0;i<((n/2)-1);i++)
		{
			cout<<"1";
		}
		cout<<"1"<<endl;
	}
	else{
		cout<<"7";
	
	for(i=0;i<((n-3)/2);i++)
	{
		if(i==((n-3)/2)-1)
		    cout<<"1"<<endl;
		else
			cout<<"1";
	}
	if(i==0)
		cout<<"\n";
	
   }

	
	}

}