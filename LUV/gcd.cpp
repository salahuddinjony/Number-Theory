#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    optimize();
    int n; 
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << "GCD=" << gcd(a, b) << endl;
        cout << "LCM=" << (a == 0 || b == 0 ? 0 : abs(a * b) / gcd(a, b)) << endl;
    }

    //Minimum fractions using gcd of 12/18===3/6

    cout<<12/gcd(12,18)<<"/"<<18/gcd(12,18)<<endl;

   /*  // GCD using inbuilt function
    cout << "__gcd(12, 13) = " << __gcd(12, 13) << endl;
 */
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/