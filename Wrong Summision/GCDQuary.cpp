#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e5 + 123;
long long a[mx];




// Problem Link: https://www.youtube.com/watch?v=smOspuRLIpY&list=PL0G2Ga9ALv6k1JZwK0gLvP96uaP2BwPpo&index=18



// GCD function
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    optimize();
    
    int n, l, r;
    cin >> n >> l >> r;

    // Input array
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Precomputing prefix and suffix GCDs
    int preGCD[n + 1];  // Prefix GCD array
    int postGCD[n + 1]; // Suffix GCD array
    
    preGCD[0] = 0; // base case for prefix
    postGCD[n] = 0; // base case for suffix
    
    // Fill the preGCD array
    for (int i = 1; i <= n; i++) {
        preGCD[i] = gcd(preGCD[i - 1], A[i - 1]);
    }

    // Fill the postGCD array
    for (int i = n - 1; i >= 0; i--) {
        postGCD[i] = gcd(postGCD[i + 1], A[i]);
    }

    // The result is the GCD between the prefix GCD up to l-1 and suffix GCD from r+1
    cout << gcd(preGCD[l - 1], postGCD[r]) << endl;

    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/