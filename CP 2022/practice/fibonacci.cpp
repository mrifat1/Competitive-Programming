#include<bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    int a = 0,b =1,c;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i < n; i++)
    {
        c = a+b;
        cout<<a+b<<" ";
        a = b;
        b = c;
    }
    cout<<a+b<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
}