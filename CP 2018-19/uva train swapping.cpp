#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a[100],n,l,i,j,c;

    cin>>n;
    while(n--)
    {
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a[i];
        }
        for(i=1,c=0;i<l;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]>a[i])
                    c++;
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }
}
