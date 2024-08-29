#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/* int gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
} */

int gcdRes(multiset<ll>& A, ll x) {
    // Find and remove the minimum element with gcd > 1
    for (auto it = A.begin(); it != A.end(); ++it) {
        if ((*it!=1 and x!=1) and (x%*it==0 or *it%x==0)) {
            ll result = *it;
            A.erase(it);
            return result;
        }
    }
    int result = *A.begin();
    A.erase(A.begin());
    return result;
}

int main() {
    optimize();
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n;
        multiset<ll> A;
        for (ll i = 0; i < n; i++) {
            ll elem;
            cin >> elem;
            A.insert(elem);
        }
        cin >> q;
        vector<int> results;
        while (q--) {
            int x;
            cin >> x;
            ll res = gcdRes(A, x);
            cout<<res<<" ";
        }
       
    }
    return 0;
}