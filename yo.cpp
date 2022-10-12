#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

#define int                     long long
#define ff                      first
#define ss                      second
#define mod                     1000000007
#define sz(a)                   (long long)((a).size())
#define pb                      push_back
#define all(c)                  c.begin(),c.end()
#define rall(c)                  c.rbegin(),c.rend()
#define tr(c,i)                 for(typeof(c).begin() i = c.begin(); i != c.end(); i++)
#define present(c,x)            (c.find(x) != c.end())
#define cpresent(c,x)           (find(all(c),x) != c.end())
#define fo(i,a)                 for(int i=0;i<a;i++)
#define rep(i,a,b)              for(int i=a;i<b;i++)
#define rev(i,a,b)              for(int i=a-1;i>=b;i--)
#define bharo(a,n)              fo(i,n)cin>>a[i]
#define setd(n)                 fixed<<setprecision(n)
using namespace std;
typedef long long ll;
typedef vector < ll > vi;
typedef vector < vi > vvi;
typedef pair < ll, ll > pii;


// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// find_by_order(x) : returns iterator to the xth element in pbds
//order_of_key(x) : gives number of elements strictly less than x


ll binpow(ll a, ll b, int m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
// int fact[100005];

// int modinv(int i, int m) {return binpow(i, m - 2, m);}
// ll add(ll a, ll b) {a %= mod; b %= mod; ll res = (a + b) % mod; return res % mod;}
// ll mul(ll a, ll b) {ll res = (a) * (b); res %= mod; if (res < 0) res += mod; return res;}
// int ncr(int n, int r) {return (n >= r ? (fact[n] * modinv(fact[r], mod)) % mod * modinv(fact[n - r], mod) % mod : 0);}
/////////////////////////////////////////////////Basic Temp Over//////////////////////////////////////////

const ll N = 0;

//////////////////////////////////////////////Dep////////////////////////////////////////////////////////


void solve() {
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    ll t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }
}