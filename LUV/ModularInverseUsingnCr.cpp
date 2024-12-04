#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mx = 2e5+123; // Maximum limit for factorial calculations
const int M = 1e9+7;    // Modulus for calculations to prevent overflow

// Function prototype for Binary Exponentiation
int BinaryExp(int a, int b, int m);

// Arrays to store precomputed factorials and modular inverses
int fact[mx+1], inv[mx+1];

// Function to precompute factorials and modular inverses

void precompute() {
    fact[0] = 1; // Base case: 0! = 1
    for (int i = 1; i <= mx; i++) {
        fact[i] = (fact[i-1] * 1LL * i) % M; // Compute i! % M iteratively
    }

    // Compute the modular inverse of fact[mx] using Fermat's Little Theorem
    inv[mx] = BinaryExp(fact[mx], M-2, M); // inv[mx] = fact[mx]^(M-2) % M
    for (int i = mx-1; i >= 0; i--) {
        // Compute inverses for all numbers using the relation: inv[i] = inv[i+1] * (i+1)
        inv[i] = (inv[i+1] * 1LL * (i+1)) % M;
    }
}

// Function to compute a^b % m using Binary Exponentiation
int BinaryExp(int a, int b, int m) {
    int result = 1;
    while (b) {
        if (b & 1) { // If the current bit of b is 1
            result = (result * 1LL * a) % m; // Multiply result by a % m
        }
        a = (a * 1LL * a) % m; // Square a % m
        b >>= 1; // Right shift b (divide by 2)
    }
    return result;
}

// Function to compute nCr % M
int nCr(int n, int r, int m) {
    if (r > n) return 0; // nCr is not defined if r > n
    // Use precomputed factorials and inverses to calculate nCr
    return fact[n] * 1LL * inv[r] % m * inv[n-r] % m;
}

int main() {
    optimize();
    precompute(); // Precompute factorials and modular inverses
    cout << nCr(10, 3, M) << endl; // Example: Compute 10C3 % M
    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/