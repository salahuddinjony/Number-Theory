#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int M = 1e8 + 7;

// Function to compute a^b % m using Binary Exponentiation
int BinaryExp(int a, int b, int m) {
    int result = 1;
    while (b) {
        if (b & 1) {
            // If the current bit of b is 1, multiply the result with a and take modulo m
            result = (result * 1LL * a) % m;
        }
        // Square a and take modulo m
        a = (a * 1LL * a) % m;
        // Right shift b to process the next bit
        b = (b >> 1);
    }
    return result;
}

int main() {
    optimize();
    
    // Compute modular inverse of 2 modulo M using Fermat's Little Theorem
    // When M is prime, a^(M-1) ≡ 1 (mod M)
    // This implies a^(M-2) ≡ a^(-1) (mod M)
    cout << BinaryExp(2, M - 2, M) << endl;

    return 0;
}

/*
 Author : SALAH
 "HARD WORK CAN CHANGE LUCK" 

 Documentation:
 - BinaryExp(a, b, m):
   Inputs: a (base), b (exponent), m (modulo)
   Output: (a^b) % m computed efficiently in O(log b) time.

 - Main Function:
   Computes the modular inverse of 2 modulo M using Fermat's Little Theorem.
   Output: Modular inverse of 2 modulo M.

*/