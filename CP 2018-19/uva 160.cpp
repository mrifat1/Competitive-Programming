#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int MAX = 10000;
int ar[10000],a,b,i,j,cnt[10000];

void sf(int &x){scanf("%d",&x);}
void sf(LL &x){scanf("%lld",&x);}
void sf(LL &x,LL &y){scanf("%lld%lld",&x,&y);}
void sf(float &x){scanf("%f",&x);}
void sf(double &x){scanf("%lf",&x);}
void sf(int &x,int &y){scanf("%d%d",&x,&y);}
void sf(float &x,float &y){scanf("%f%f",&x,&y);}
void sf(double &x,double &y){scanf("%lf%lf",&x,&y);}
void sf(double &x,double &y,double &z){scanf("%lf%lf%lf",&x,&y,&z);}
void sf(int &x,int &y,int &z){scanf("%d%d%d",&x,&y,&z);}
void sf(LL &x,LL &y,LL &z){scanf("%lld%lld%lld",&x,&y,&z);}
void sf(float &x,float &y,float &z){scanf("%f%f%f",&x,&y,&z);}
void sf(char &x){x=getchar();}
void sf(char *s){scanf("%s",s);}
void sf(string &s){cin>>s;}
 
void pf(int x) {printf("%d\n",x);}
void pf(int x,int y) {printf("%d %d\n",x,y);}
void pf(int x,int y,int z) {printf("%d %d %d\n",x,y,z);}
void pf(LL x) {printf("%lld\n",x);}
void pf(LL x,LL y) {printf("%lld %lld\n",x,y);}
void pf(LL x,LL y,LL z) {printf("%lld %lld %lld\n",x,y,z);}
void pf(float x) {printf("%f\n",x);}
void pf(double x) {printf("%.9lf\n",x);}
void pf(double x,double y) {printf("%.5lf %.5lf\n",x,y);}
void pf(char x) {printf("%c\n",x);}
void pf(char *x) {printf("%s\n",x);}
void pf(string x) {cout<<x<<endl;}

void seive()
{
	i=2;
    ar[1]=1;
	while((i*i)<=MAX)
	{
		if(ar[i]!=1){
		for(j = 2; j <= MAX; j++)
		{
			if((i*j)>MAX)
				break;

			ar[i*j]=1;
		}
	}
	i++;
	}
}

main()
{

	int n,store;
	sf(n);

    int j  = 2;
	for(i = 2; i <= n; i++)
    {
    	store = i;
    	j = 2;
    
        while(store!=1){
    		 if( i%j == 0 && ar[j] == 0){
    		  store = store/i;
    		  cnt[j]++;
    		}
    		else
    			j++;
   		  }
    }

    for(i = 2; i <= n; i++)
    {
    	if(cnt[i])
    		cout<<cnt[i]<<endl;
    }


 }


