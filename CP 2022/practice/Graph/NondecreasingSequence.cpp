#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned long long arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt = 0;
    unsigned long long  sum = arr[0], check = arr[1];
    for(int i=1;i<n-1;i++)
    {
        if(check>=sum) sum = check;

        else if(check<sum)
        {
            cout<<"sum are "<<sum<<endl;
            check = check + arr[i+1];
            ++cnt;
            i++;
            
        }
    }
    cout<<cnt<<endl;
}