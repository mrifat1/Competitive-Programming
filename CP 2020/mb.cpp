#include<bits/stdc++.h>
#define mxN 100010
using namespace std;
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
typedef long long ll;
bool isp[mxN + 10] ;
vector <ll> prime ;
 
template <typename T> void sieve(T n){
    for(T i = 1 ; i <= n ; i++) isp[i] = 0 ;
    isp[0] = isp[1] = 1 ;
    for(T i = 4 ; i <= n ; i += 2) isp[i] = 1 ;
    for(T i = 3 ; i * i <= n ; i += 2) {
        if(!isp[i]) {
            for(T j = i * i ; j <= n ; j += i + i) {
                isp[j] = 1 ;
            }
        }
    }
    prime.push_back(2);
    for(T i = 3 ; i <= n ; i += 2) {
        if(!isp[i]) {
            prime.push_back(i) ;
        }
    }
}
 
template <typename T> T phi(T n) {
    T coprime = n ;
    T sz = prime.size();
    for(T i = 0 ; i < sz && prime[i] * prime[i] <= n ; i++){
        if(n % prime[i] == 0) {
            while(n % prime[i] == 0)
                n /= prime[i] ;
            coprime -= (coprime / prime[i]) ;
        }
    }
    if(n > 1)
        coprime -= (coprime / n);
    return coprime;
}
 
int main() {
    //FasterIO
    sieve(mxN) ;
    int tc ; cin >> tc ;
    while(tc--) {
        ll a , m ;
        cin >> a >> m ;
        ll g = gcd(a , m) ;
        cout << phi(m / g) << "\n" ;
    }
    return 0 ;
}