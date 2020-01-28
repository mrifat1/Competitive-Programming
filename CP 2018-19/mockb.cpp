#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long p=10000001;
int main()
{
	ll person,bud,hotel,weeks,cost,rent,beds,total,i;
	while(scanf("%lld%lld%lld%lld",&person,&bud,&hotel,&weeks)==4)
    {
        p=10000010;
        while(hotel--)
       {
        cin>>cost;
	   for(i=0;i<weeks;i++)
       {
          cin>>beds;
          total=0;
           if(beds>=person)
           {
               total=person*cost;
               if(total<p)
                p=total;
           }
       }
    }
    if(p>bud)
        cout<<"stay home"<<endl;
    else
        cout<<p<<endl;

    }
}
