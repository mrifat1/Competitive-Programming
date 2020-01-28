#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n<=1)
    {
        //cout<<n<<endl;
        return 1;
    }

    else
    {
        //cout<<n<<endl;
        return n+rec(n-1);
    }

}
int main()
{
    int num;
    cin>>num;
    cout<<rec(num)<<endl;
}
