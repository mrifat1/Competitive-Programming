#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[1000],rando,arr[1000];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
        arr[i] = 0;
    }
    cin>>rando;
    for (int i = n-1; i >=0; i--)
    {
        if(rando == 0)
        {
            arr[i]=ar[i] - rando;
        }
        if(rando%10 > ar[i])
        {
            arr[i] = (ar[i]+10)-(rando%10);
            rando = (rando/10) + 1;
        }
        else{
            arr[i] = ar[i] - (rando%10);
            rando = (rando/10);
        }
    }
    bool check = false;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i]==0 && check==false)
            continue;
        else if(arr[i]==0 && check)
        {
            cout<<arr[i]<<" ";
        }
        else if(arr[i]!=0){
            cout<<arr[i]<<" ";
            check = true;
        }
    }
    cout<<arr[n-1]<<endl;
    
}