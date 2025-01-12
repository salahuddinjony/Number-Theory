#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 2e5 + 123;
long long a[mx];

vector<vector<int>> subsets;
//A subset includes any combination of elements, and the elements need not be contiguous.
void generateSubSet(vector<int> subset, int i, vector<int> &nums) {
    if (i == nums.size()) { // Base case: all elements processed
        subsets.push_back(subset);
        return;
    }

    // Exclude the i-th element
    generateSubSet(subset, i + 1, nums);

    // Include the i-th element
    subset.push_back(nums[i]);
    generateSubSet(subset, i + 1, nums);

    // Backtracking: remove the last element (not strictly necessary here but good practice)
    subset.pop_back();
}

int main() {
    optimize();

    int n;
    cin >> n; // Input the number of elements
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Input the elements of the array
    }

    vector<int> Empty; // Start with an empty subset
    generateSubSet(Empty, 0, nums);

   

    // Output all subsets
    for (auto &sub : subsets) {

        cout<<"{ ";
        for (auto &el : sub) {
            cout << el << " ";
        }
         cout<<"}";
        cout << endl;
    }

    return 0;
}

/*
 Author : SALAH 
 "HARD WORK CAN CHANGE LUCK" 
*/