#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int M = 1e9 + 7;
const int mx = 1e5 + 10; // Maximum K value across all test cases

vector<int> fact(mx), inv(mx);

// Binary exponentiation: (a^b) % m
int BinaryExp(int a, int b, int m) {
    int result = 1;
    while (b) {
        if (b & 1) {
            result = (result * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return result;
}

// Precompute factorials and modular inverses
void preCompute() {
    fact[0] = 1;
    for (int i = 1; i < mx; i++) {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }

    inv[mx - 1] = BinaryExp(fact[mx - 1], M - 2, M); // Modular inverse of fact[mx-1]
    for (int i = mx - 2; i >= 0; i--) {
        inv[i] = (inv[i + 1] * 1LL * (i + 1)) % M;
    }
}

// Compute P(K, N) = K! / (K - N)! % M
int P(int K, int N) {
    if (N > K) return 0; // Impossible if N > K
    return (fact[K] * 1LL * inv[K - N]) % M;
}

int main() {
    optimize();
    preCompute(); // Precompute factorials and inverses once
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        cout << P(K, N) << endl; // Compute the number of possible passwords
    }
    return 0;
}

/*
 Author : SALAH
 "HARD WORK CAN CHANGE LUCK"
*/