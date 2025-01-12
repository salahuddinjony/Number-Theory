#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int m = 1337;

    // Converts the vector into a single number modulo 1140
    long long int get_num(vector<int> &arr) {
        if (arr.size() == 0)
            return 0;
        if (arr.size() == 1)
            return arr[0];
        long long int temp = 0;
        int cnt = 1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            temp = (temp + (cnt * arr[i]) % 1140) % 1140;
            cnt = (cnt * 10) % 1140;
        }
        return temp;
    }

    // Computes binary exponentiation
    long long binary_expo(long long a, long long b, long long m) {
        if (b == 0)
            return 1;
        if (b == 1)
            return a % m;
        long long ans = 1;
        while (b) {
            if (b & 1) {
                ans = (ans * a) % m;
            }
            a = (a * a) % m;
            b =( b >> 1);
        }
        return ans;
    }

    // Function to compute the super power
    int superPow(int a, vector<int>& b) {
        long long int brr = get_num(b);
        if (brr == 0)
            return 1;
        if (brr == 1)
            return a % m;
        return binary_expo(a, brr, m);
    }
};

int main() {
    Solution solution;

    // Example Input
    int a;
    vector<int> b;

    cout << "Enter base (a): ";
    cin >> a;

    int n;
    cout << "Enter number of digits in vector (b): ";
    cin >> n;

    cout << "Enter digits of b separated by space: ";
    for (int i = 0; i < n; i++) {
        int digit;
        cin >> digit;
        b.push_back(digit);
    }

    // Call the function and display the result
    int result = solution.superPow(a, b);
    cout << "Result of superPow: " << result << endl;

    return 0;
}