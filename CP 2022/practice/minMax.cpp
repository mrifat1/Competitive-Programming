// Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t,i,j,arr[10000],min=INT_MAX,max=INT_MIN ;
    cin>>n;
    // cout<<LONG_LONG_MAX<<"\n";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else if(arr[i]>max)
         {
             max = arr[i];
         }
        // else
        //  min = arr[i];
        /* code */
    }
    cout<<"Maximum "<<max<<"\n";
    cout<<"Minimum "<<min<<"\n";
    


}