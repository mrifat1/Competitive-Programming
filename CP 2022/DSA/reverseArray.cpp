#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[10000],n,t,arr2[10000];
    cin>>n;
    int test = n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[--test] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        cout<<arr2[i]<<"\n";
        else
        cout<<arr2[i]<<" ";
    }

}