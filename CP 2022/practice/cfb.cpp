#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        char ch[2][n+5];
        for(int i=0; i < 2; i++)
        {
            cin>>ch[i];
        }
        bool check = false;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char a = ch[i][j];
                char b = ch[i+1][j];
                if(a=='R' && b=='R' || a=='G' && b=='G' || a=='B' && b=='B' || a=='B' && b=='G' || a=='G' && b=='B')
                {
                    continue;
                }
                else{
                    check = true;
                }
            }
        }
        if(check)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
        
        
        
    }
}