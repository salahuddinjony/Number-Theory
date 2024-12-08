#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> subsets(vector<int> &nums) {  // using use of index of Nums
    int n = nums.size();
    int subset_cnt = (1 << n); // 2^n subsets
    vector<vector<int>> subsets;

    for (int mask = 0; mask < subset_cnt; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // Check if the i-th element is in the subset
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    } 
    return subsets; 
}

int main() {
    optimize();
    int n;
    cin >> n; // Read the size of the array
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto result = subsets(nums); // Generate all subsets
    //vector<vector<int>> result = subsets(nums); // Generate all subsets

    // Output all subsets (optional)
    for (auto &subset : result) {
        cout << "{ ";
        for (int &x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/