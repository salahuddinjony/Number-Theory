#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to perform binary exponentiation (a^b % m)
long long BinEx(long long a, long long b, long long m) {
    long long ans = 1;
    a = a % m; // Ensure a is within modulo m
    while (b) {
        if (b & 1) {
            ans = (ans * a) % m; // If b is odd, multiply the result by a
        }
        a = (a * a) % m; // Square the base
        b >>= 1;         // Divide b by 2
    }
    return ans;
}

int main() {
    optimize();
    long long m = 1e9 + 7; // Modulo value (prime number)
    long long a = 23, b = 30, c = 40;

    // Compute a^(b^c) % m
    // Use (m-1) for the inner exponentiation due to Fermat's Little Theorem
    long long result = BinEx(a, BinEx(b, c, m - 1), m);

    cout << "Result: " << result << endl;

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/