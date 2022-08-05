// Given an array of consecutive numbers, find the missing number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[1000], sum = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];

        /* code */
    }
    n+=1;
    int preCal = (n*(n+1))/2;
    cout<<abs(preCal - sum)<<endl;
    
}