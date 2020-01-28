#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n<=1)
        return 1;
    else
    {
        cout<<n<<" ";
        rec(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    rec(n);
}

