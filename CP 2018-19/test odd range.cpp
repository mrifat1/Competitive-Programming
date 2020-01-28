#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,l,r,oddsum,countodd;

    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l%2==0)
            l++;
        if(l%2==1 && r%2==1)
            r++;

        countodd=((r-l)+1)/2;
        oddsum=countodd*countodd;
        cout<<oddsum<<endl;
    }
}
