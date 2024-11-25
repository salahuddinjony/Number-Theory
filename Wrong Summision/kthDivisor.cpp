#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void DivisorCnt(long long int n, vector<long long int> &divisors) {
    for (long long int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
}

int main() {
    optimize();

   
        long long int n, k;
        cin >> n >> k;
        
        vector<long long int> divisors;
        DivisorCnt(n, divisors);
        
        if (k <= divisors.size()) {
            cout << divisors[k-1] << endl;
        } else {
            cout << -1 << endl;
        }
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/