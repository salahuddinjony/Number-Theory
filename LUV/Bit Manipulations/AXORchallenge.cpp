#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Constant for maximum array size (not used in this code)
const int mx=2e5+123;
long long a[mx];

int main(){
    optimize();

    int c; 
    cin >> c; 
    
    // Calculate the number of bits needed to represent 'c' in binary
    int cnt_ln = (int)log2(c) + 1;
    
    vector<int> set_bit; 
    int a = 0, b = 0;    // Initialize a and b with unset bits of 'c'

    // Iterate over all bit positions
    for (int i = 0; i < cnt_ln; i++) {
        
        if (c & (1 << i)) { // Check if the i-th bit of 'c' is set
            set_bit.push_back(i); // Save the position of the set bit
        } else {
            a |= (1 << i); // Add unset bit to both 'a' and 'b'
            b |= (1 << i);
        }
    }

    int sz = (1 << set_bit.size()); // 2^(number of set bits)
    long long ans = -1;

    for (int mask = 0; mask < sz; mask++) {
        int a_copy = a, b_copy = b; // Reset a_copy and b_copy for each mask

        // Distribute set bits based on the current mask
        for (int j = 0; j < set_bit.size(); j++) {
            if (mask & (1 << j)) { // Check if the j-th bit in the mask is set
                a_copy |= (1 << set_bit[j]); // Add the set bit to 'a' ( a_copy = 0101|0010 = 0111  (decimal 7))
            } else {
                b_copy |= (1 << set_bit[j]); // Add the set bit to 'b'
            }
        }

       
        ans = max(ans, a_copy * 1LL * b_copy); // Update the maximum product
    }
    cout << ans;

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/