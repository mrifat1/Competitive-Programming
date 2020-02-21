#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100000];
ll ar2[100000];
void fibo()
{
	ar[1]=1;
	ar[2]=1;
	ar2[1]=1;
	ar2[2]=1;
	for(ll i=3;i<=20;i++)
	{
		ar[i]=(ar[i-2]+ar[i-1]);
		//cout<<ar[i]<<endl;
		ar2[ar[i]]=1;
	}
}
int main() {
	fibo();
	ll i,j,n,k,l,m;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(ar2[i])
			cout<<"O";
		else
			cout<<"o";
	}
	if(ar2[n])
	{
		cout<<"O"<<endl;
	}
	else
		cout<<"o"<<endl;
 
}