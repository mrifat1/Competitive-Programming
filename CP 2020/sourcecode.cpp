#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
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
 
#define FasterIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb       push_back
#define MP       make_pair
#define Sort(v)  sort(v.begin(),v.end())
#define Mxe(v)   *max_element(v.begin(),v.end())
#define Mne(v)   *min_element(v.begin(),v.end())
#define Fill0(a) memset(a,0,sizeof(a))
#define Fin      freopen("input.txt","r",stdin)
#define Fout     freopen("output.txt","w",stdout)
#define precision(a) cout << fixed << setprecision(a) 
#define MOD 1e9+7 
#define maxi 10000100
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);
ll prime[maxi];
 
template <typename T> T Abs(T a) {if(a<0)return -a;else return a;}
template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T ModInv (T b,T m){return BigMod(b,m-2,m);}
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template <typename T> T exgcd(T a,T b,T &x,T &y) {if(a<0){T d=exgcd(-a,b,x,y);x=-x;return d;}   if(b<0){T d=exgcd(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=exgcd(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template <typename T> typename std::vector<T>::iterator insert_sorted (std :: vector<T> & vec, T const& item) {return vec.insert (std::upper_bound( vec.begin(), vec.end(), item ), item);}
template <typename T> T isperfectsq(T x){ T n = sqrt(x); return ((n * n == x)?1:0);}
template <typename T> T Sqr(T x) { T n = x * x ; return n ;}
 
char uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}
int strtoint(string str){stringstream ss(str);int x = 0;ss >> x ;return x ;}
string intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}
vector<string> linetostr(string str){string s; vector <string> v ;istringstream is(str); while(is >> s)v.pb(s);return v;}
 
//void fasterIO() { ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0) ;}
 
//int dx[] = {0,0,-1,1,-1,-1,1,1,0};
//int dy[] = {1,-1,0,0,-1,1,-1,1,0};
//int dx[] = {0 , 0 , -1 , 1} ; // right , left , for , back
//int dy[] = {1 , -1 , 0 , 0} ; 
//scanf(" %[^\n]", str) ;
/*void sf(int &x){scanf("%d",&x);}
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
void sf(point &x) { DD a,b; sf(a,b); x=point(a,b); }
 
// OUTPUT
 
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
void pf(string x) {cout<<x; ln; }
//void pf(point x)  {printf("%d %d\n",x.x,x.y);}*/
int main()
{
	FasterIO
	ll ar[100],i,j,k,l;
	for(i=0;i<15;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+15);
	l=ar[0];
	for(i=1;i<15;i++)
	{
		l=lcm(l,ar[i]);

	}
	cout<<l<<endl;

}