#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c,d,e,f,i,j,k,l;
	int ar[5],val[5];
	cin>>n;
	for(i=0;i<3;i++)
		cin>>ar[i];

	sort(ar,ar+3);
	d = n - ar[1];
	f = n - ar[2];
	j = n - ar[0];
	if(d%ar[i]==0)
	{
		e = d/ar[0];
		cout<<e+1<<endl;
	}
	else
	{
		while()
	}
	else if(f%ar[0]==0)
	{
		e = f/ar[0];
		cout<<e+1<<endl;
	}
	else if(j%ar[1]==0)
	{
		e = j/ar[1];
		cout<<e+1<<endl;
	}
	else if(j%ar[2]==0)
	{
		e =  j/ar[2];
		cout<<e+1<<endl;
	}
	else if(d%ar[2]==0)
	{
		e = d/ar[2];
		cout<<e+1<<endl;
	}
	else if(f%ar[1]==0)
	{
		e = f/ar[1];
		cout<<e+1<<endl;
	}
	else
	{
		if(n%ar[0]==0)
			e = n/ar[0];
		else if(n%ar[1]==0)
			e = n/ar[0];
		else if(n%ar[2]==0)
			e =  n/ar[2]; 
		else


	}


	
    
    


}