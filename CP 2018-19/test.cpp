#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,n,t,cnt=0,i;
    
    while(cin>>n>>t){
    	cnt = 0;

   for(i=1;i<=n;i++)
   {
   	 if(i>t)
   	 	break;

   	 if(t%i==0)
   	 {
   	 	if((t/i)<=n)
   	 		cnt++;
   	 }
   }   
    cout<<cnt<<endl;
  }
   
}