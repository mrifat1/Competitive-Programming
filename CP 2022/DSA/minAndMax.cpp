//  Maximum and minimum of an array using minimum(n/2) number of comparisons(3)
#include<bits/stdc++.h>
using namespace std;

void minAndMax(int ar[],int &min, int &max, int &n)
{
    // cout<<min<<" "<<n<<endl;
    bool odd = n & 1;
    if(odd)
     n--;

    for(int i = 0; i < n; i+=2)
    {
        int maximum,minimum;
        if(ar[i]>ar[i+1])
        {
            maximum = ar[i];
            minimum = ar[i+1];
        }
        else
        {
            maximum = ar[i+1];
            minimum = ar[i];
        }

        if(maximum>max)
        max = maximum;

        if(minimum<min)
        min = minimum;
    }
    // cout<<"end "<<max<<" "<<ar[n]<<endl;
    
    if(odd)
    {
        if(ar[n]>max)max = ar[n];
        if(ar[n]<min)min = ar[n];
    }
    // cout<<"end "<<max<<" "<<min<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,ar[1000],min=INT_MAX,max=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    minAndMax(ar,min,max,n);
    cout<<"Minimum value in minimum(n/2) comparison "<<min<<"\n";
    cout<<"Maximum value in minimum(n/2) comparison "<<max<<"\n";
}