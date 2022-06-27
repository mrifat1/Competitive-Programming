#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ar[10000];
    cin>>n>>k;

    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    set<int> s(ar,ar+n);
    set<int>::iterator itr = s.begin();
    advance(itr, k-1);
    cout<< *itr <<endl;
    
}