#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'

int main()
{
    optimize();
  
  pair<string, vector<int> > p;
  p.first = "OKIB";
  p.second.push_back(1) ;
  p.second.push_back(2) ;
  p.second.push_back(3) ;

  cout<<p.first<<endl;

  for(auto u : p.second)
    {
      cout<<u<<" ";
    }
}