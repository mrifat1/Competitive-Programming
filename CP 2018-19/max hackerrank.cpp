#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[10],i,maxi,mini;

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    mini=0;
    maxi=0;
    sort(arr,arr+5);
    for(i=1;i<5;i++)
    {
        mini=mini+arr[i];
    }
    for(i=0;i<4;i++)
    {
        maxi=maxi+arr[i];
    }
    cout<<maxi<<" "<<mini<<endl;


}
