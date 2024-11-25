#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 90000000;  // Adjusted to cover the 1,000,000th prime
bool prime[900000001];
vector<int>ans;
void sieve() {
  
    for (int i = 2; i * i <= N; i++) {
        if (prime[i]==false) {
            for (int j = i * i; j <=N; j += i) {
                prime[j] = true;
            }
        }
    }
    
    for (int i = 2; i <=N; i++) {
        if (prime[i]==false) ans.push_back(i);
    }
}

int main() {
    optimize();
    
    sieve();  // Precompute primes

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ans[n - 1]<<"\n";  // n-1 because array index starts from 0
    }
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/