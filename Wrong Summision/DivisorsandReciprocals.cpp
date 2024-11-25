#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Function to calculate sum of divisors
int sumOfDivisors(int N) {
    int sum = 0;
    for (int i = 1; i*i <=N; ++i) {
        if (N % i == 0) {
            sum += i;
            if (i != N / i) {
                sum += N / i;
            }
        }
    }
    return sum;
}

// Function to find N such that sum of divisors of N equals x
int Reciprocals(int x, int a, int b) {
    int N = (x * b) / a;
    if ((x * b) % a != 0) return -1;  // Ensure N is an integer
    int sum = sumOfDivisors(N);
    if (sum == x) return N;
    return -1;
}

int main() {
    optimize();
    
    int t;
    cin >> t;
    while (t--) {
        int x, a, b;
        cin >> x >> a >> b;
        cout << Reciprocals(x, a, b) << endl;
    }
    
    return 0;
}