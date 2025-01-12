#include <bits/stdc++.h>
using namespace std;

void generateSubarrays(int start, int end, vector<int> &nums, int m, int &cnt) {
    if (end == nums.size()) { 
        // Base case: If 'end' reaches the size of the array, stop recursion
        return;
    } else if (start > end) { 
        // Move to the next subarray by increasing 'end'
        generateSubarrays(0, end + 1, nums, m, cnt);
    } else {
        // Process the current subarray
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += nums[i];
        }
        if (sum % m == 0) {
            cnt++;
        }

        // Move to the next starting point in the current subarray
        generateSubarrays(start + 1, end, nums, m, cnt);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Input the elements of the array
    }

    int cnt = 0; // Counter for subarrays divisible by m
    generateSubarrays(0, 0, nums, m, cnt); // Start generating subarrays from (0, 0)

    cout << cnt << endl; // Output the total count

    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/
