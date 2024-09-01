#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Function to calculate (base^p) % mod using exponentiation by squaring
int power(int base, int p, int mod) {
    int ans = 1;
    while (p) {
        if (p % 2 != 0) {  // If p is odd
            ans = (ans * base) % mod;
            p--;
        } else {  // If p is even
            base = (base * base) % mod;
            p /= 2;
        }
    }
    return ans % mod;
}

int main() {
    optimize();
    /*
    (a + b) % m = ((a % m) + (b % m)) % m
    (a * b) % m = ((a % m) * (b % m)) % m 

    (a / b) % m
    = a * b^-1 % m
    Now we know from Fermat's Little Theorem:
    a^(m-1) ≡ 1 (mod m) [Here a is a number and m is modular]
    => a^(m-2) ≡ a^-1 (mod m)

    So now,
    b^-1 ≡ b^(m-2) (mod m)
    
    Therefore,
    (a * b^(m-2)) % m
    = ((a % m) * (b^(m-2) % m)) % m (Solution)
    */

    int a, b, m;
    cin >> a >> b >> m;

    if (b == 0) {
        cout << "Division by zero is undefined." << endl;
        return 0;
    }

    if (b % m == 0) {
        cout << "Division is not valid in this case." << endl;
        return 0;
    }

    // Compute modular inverse of b under mod m
    int x = (m == 1) ? 0 : power(b, m - 2, m);  // Handle m == 1 separately
    int resa = a % m;
    int res = (resa * x) % m;

    cout << res << endl;
    return 0;
}