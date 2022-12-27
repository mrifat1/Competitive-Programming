#include<iostream>
using namespace std;
int n;
int ar[100][100]= {0};
bool isBiparTite(int i, int color[])
{
    bool check = true;
    for(int j=0;j<n;j++)
    {
        if(ar[i][j]==1)
        {
            if(color[j]==-1)
            {
                color[j] = 1 - color[i];
                check = check & isBiparTite(j,color);
            }
            else if(color[i] == color[j])
            {
                return false;
            }
        }
    }
    return check;
}
int main()
{
    cin>>n;
    int color[n];

    for(int i = 0; i < n; i++)
    {
        color[i] = -1;
        for(int j = 0; j < n; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(color[i]==-1)
        {
            color[i]=0;
            if(!isBiparTite(i,color))
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(color[i]==0)
        {
            cout<<i<<" ";
        }

    }
 

}
