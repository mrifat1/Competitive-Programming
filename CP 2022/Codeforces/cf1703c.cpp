#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,ar[110],ar2[110];
       string str[110];
       cin>>n;
       for (int i = 0; i < n; i++)
       {
        cin>>ar[i];
        /* code */
       }
       
       for (int i = 0; i < n; i++)
       {
        /* code */
        cin>>ar2[i];
        cin>>str[i];
       }
       for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < ar2[i]; j++)
        {
            /* code */
            if(ar[i]==9 && str[i][j]=='D')
                ar[i]=0;
            else if(ar[i]==0 && str[i][j]=='U')
                ar[i]=9;
            else if(str[i][j]=='D')
            ar[i] += 1;
            else if(str[i][j]=='U')
            ar[i] -= 1;

        }
        
        /* code */
       }
       int lastIt;
       for (lastIt  = 0; lastIt < n-1; lastIt++)
       {
        cout<<ar[lastIt]<<" ";
        /* code */
       }
       cout<<ar[lastIt]<<endl;
       
       

       
    }
}