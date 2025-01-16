#include <bits/stdc++.h>
using namespace std;

void generateSubarrays(int start, int end, vector<int> &nums) {
    if (end == nums.size()) { 
        // Base case: If 'end' reaches the size of the array, stop recursion
        return;
    } else if (start > end) { 
        // Move to the next subarray by increasing 'end'
        generateSubarrays(0, end + 1, nums);
    } else {
        // Print the current subarray
        cout << "Subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        // Move to the next starting point in the current subarray
        generateSubarrays(start + 1, end, nums);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;  // Input the size of the array
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Input the elements of the array
    }

    generateSubarrays(0, 0, nums); // Start generating subarrays from (0, 0)

    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/