#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long gcd(long long a, long long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

long long lcm(long long x, long long y) {
    if (x == 0 || y == 0) return 0; // LCM is undefined for zero inputs
    return x / gcd(x, y) * y;
}

long long count(long long x, int a, int b, int c) {
    long long ab = lcm(a, b);
    long long bc = lcm(b, c);
    long long ac = lcm(a, c);
    long long abc = lcm(ab, c);

    return (x / a) + (x / b) + (x / c)
         - (x / ab) - (x / bc) - (x / ac)
         + (x / abc);
}

int uglyNumber(int n, int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        cerr << "Invalid input: a, b, and c must be positive integers." << endl;
        return -1;
    }

    long long lo = 1, hi = (long long)n * max({a, b, c});
    long long result = -1;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        if (count(mid, a, b, c) >= n) {
            result = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return result;
}

int main() {
    optimize();
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n <= 0 || a <= 0 || b <= 0 || c <= 0) {
        cerr << "Invalid input: n, a, b, and c must be positive integers." << endl;
        return -1;
    }

    cout << uglyNumber(n, a, b, c) << endl;
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/