#include<bits/stdc++.h>
using namespace std;
int findIndex(string str)
{
    int len = str.length();
    int ar[len];

    for(int i = 0; i <= len; i++)
        ar[i] = 0;

    for(int i = 0; i < len-1; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(str[i]==str[j])
            {
                ar[i]=1;
                ar[j]=1;
            }
        }
    }
    for(int i = 0; i < len; i++)
    {
        if(ar[i]==0){
            // check = true;
            return i;
        }
    }
    return -1;
}

int main()
{
    string str ;
    cin>>str;
    int index = findIndex(str);
    cout<<index<<endl;
}