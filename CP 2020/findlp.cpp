#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m,a,b,c,d,e,f,g,h;
	cin>>n>>m;
	vector<string>v,vv;
	set<string>st;
    string ss;
	for(i = 0; i < n; i++)
	{
		cin>>ss;
		v.push_back(ss);
		vv.push_back(ss);
	}
	//set<string>::iterator iter = st.begin();
 
	string mid;
	string start[100],end[100];

	int got = 0;
	int size = 0;
	int k=0,l=0;
	for(i = 0; i < n; i++)
	{
		string s = v[i];
		reverse(s.begin(),s.end());
		if(s == v[i]){
			mid = s;
		}

		else
		{
			for(int j = 0; j < vv.size(); j++)
			{
				//advance(iter, j);
				//string sss = *iter; 
				if(s == vv[j])
				{
					//got  = 1;
					start[k++] = v[i];
					end[l++] = s;
					vv[j]="";
					vv[i]="";
					size += 2*m;
					break;
				}
			}

		}

	}
	cout<<size+mid.size()<<endl;


	for(i = 0; i < k; i++)
	{
          cout<<start[i];
	}
	cout<<mid;
	for(i = l-1; i >= 0; i--)
	{
		cout<<end[i];
	}
	cout<<endl;
	

}