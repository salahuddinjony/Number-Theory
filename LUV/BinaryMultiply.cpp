#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long M = 1e18; // Modulo for large numbers

// Function for binary multiplication under modulo
long long BinaryMultiply(long long a, long long b) {
    long long ans = 0;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % M; // Add a to ans if the last bit of b is 1
        }
        a = (a + a) % M; // Double a
        b >>= 1;         // Shift b to the right
    }
    return ans;
}

// Function for binary exponentiation under modulo
long long BinaryExp(long long a, long long b) {
    long long ans = 1;
    while (b) {
        if (b & 1) {
            ans = BinaryMultiply(ans, a); // Multiply if the last bit of b is 1
        }
        a = BinaryMultiply(a, a);         // Square the base
        b >>= 1;                          // Shift b to the right
    }
    return ans;
}

int main() {
    optimize();
    long long a, b;
    cin >> a >> b;

    cout << "Binary Exponentiation "<<a<<"^"<<b <<": "<< BinaryExp(a, b) << endl;
    cout << "Binary Multiplication "<<a<<"*"<<b <<": "<<BinaryMultiply(a, b) << endl;

    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/