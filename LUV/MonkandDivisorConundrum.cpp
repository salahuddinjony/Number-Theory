#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 1e5 + 10;
int cnt[N], multiple_cnt[N];


/* int gcd(int a,int b){
    return (b==0) ? a: gcd(b,a%b);
} */

int main() {
    optimize();
    int n;
    cin >> n;

    // Count occurrences of each number
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    // Precompute counts of multiples
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            multiple_cnt[i] += cnt[j];
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int p, q;
        cin >> p >> q;
        long long lcm = p * 1LL * q / __gcd(p, q);

        long long ans = multiple_cnt[p] + multiple_cnt[q];
        if (lcm < N) ans -= multiple_cnt[lcm];

        cout << ans << "\n";
    }

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK"
*/