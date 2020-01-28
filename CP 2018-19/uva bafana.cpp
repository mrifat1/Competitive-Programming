#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,i,j;

     cin>>t;
     i=0;
     while(t--)
     {
         cin>>n>>k>>p;
         if((k+p)==n)
            cout<<"Case "<<++i<<": "<<n<<endl;
         else if((k+p)>n)
            cout<<"Case "<<++i<<": "<<(k+p)%n<<endl;
         else
            cout<<"Case "<<++i<<": "<<k+p<<endl;
     }

}
