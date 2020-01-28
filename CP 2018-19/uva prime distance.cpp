#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>

#define pb       push_back
#define Sqr(n)   (n*n)
#define Sort(v)  sort(v.begin(),v.end())
#define Mxe(v)   *max_element(v.begin(),v.end())
#define Mne(v)   *min_element(v.begin(),v.end())
#define Fin      freopen("input.txt","r",stdin)
#define Fout     freopen("output.txt","w",stdout)
#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sllcase sf ("%lld",&tc)
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

template <typename T> T Abs(T a) {if(a<0)return -a;else return a;}
template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template <typename T> T exgcd(T a,T b,T &x,T &y) {if(a<0){T d=exgcd(-a,b,x,y);x=-x;return d;}   if(b<0){T d=exgcd(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=exgcd(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}

char uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}
int strtoint(string str){stringstream ss(str);int x = 0;ss >> x ;return x ;}
string intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}
vector<string> linetostr(string str){string s; vector <string> v ;istringstream is(str); while(is >> s)v.pb(s);return v;}

long long ar[1000001],prime[1000001];
void seive()
{
    int in=1;
    prime[in++]=2;
   for(int i=3;i<1000001;i+=2)
   {
       ar[i]=i;
   }
   int i=3;
   while((i*i)<1000001)
   {
       if(ar[i]!=0)
       {
         for(int j=3;j<1000001;j+=2)
         {
             if(i*j>1000001)
                break;
             else
                ar[i*j]=0;
         }
       }
     i+=2;
   }
   for(i=2;i<1000001;i++)
   {
       if(ar[i])
       {
            prime[in++]=i;
       }
   }
}
int primecheck(long long p)
{
    int cnt=0;
    int n,t;
    int sq=sqrt(p);
    if(p<1000001)
    {
        if(ar[p]==0)
            return 0;
        else
            return 1;
    }
    if(p%2==0)
        return 0;

        for(t=1;prime[t]<=sq;t++)
        {
            if(p%prime[t]==0)
            {
               return 0;
            }
        }
        return 1;
     //return 1;
}
int main()
{
    seive();

    long long k,l,mini=1000001,i,j=0,a,b,c,d,m,cnt1=0,cnt2=0;
    while(scanf("%lld%lld",&k,&l)==2)
    {
    mini=1000001;
    int maxi=0;
    cnt1=0;
    cnt2=0;
    j=0;
    if(k==1)
       k++;

    if(k%2==0)
    {
        if(k==2)
        {
            j=k;
        }
        k++;
    }

    for(i=k;i<=l;i+=2)
    {
        if(primecheck(i))
        {
              if(j==0)
               {
                  j=i;
                  continue;
                }
                    m=i-j;
                    if(m<mini)
                    {
                        mini=m;
                        a=j;
                        b=i;
                        cnt1=1;
                    }
                    if(m>maxi)
                    {
                        maxi=m;
                        c=j;
                        d=i;
                        cnt2=1;
                    }
            j=i;
         }
      }

    if(cnt1 && cnt2)
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
    else
        printf("There are no adjacent primes.\n");
    }
}
