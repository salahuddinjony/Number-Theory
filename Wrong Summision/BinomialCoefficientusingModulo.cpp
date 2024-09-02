#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 100000007

ll fact(ll n) {
    if (n == 0 || n == 1) return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++) {
        res = (res * i) % mod;
    }
    return res;
}

ll power(ll base, ll n) {
    ll ans = 1;
    while (n) {
        if (n % 2 != 0) {
            ans = (ans * base) % mod;
            n--;
        } else {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return ans;
}

ll nCr(ll n1, ll r1, ll nr) {
    ll ans1 = power(r1, mod - 2);
    ll ans2 = power(nr, mod - 2);
    return (n1 * ans1 % mod * ans2 % mod) % mod;
}

int main() {
    optimize();
    ll n, r;
    cin >> n >> r;
    
    if (r > n) {
        cout << 0 << endl;
        return 0;
    }
    
    ll n1 = fact(n);
    ll r1 = fact(r);
    ll nr = fact(n - r);
    cout << nCr(n1, r1, nr) << endl;
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/