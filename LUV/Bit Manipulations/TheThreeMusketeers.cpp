/*
Problem
Our Monk visits a neighbourhood school to teach kids, once a week. This week, they are studying the famous novel "The Three Musketeers" by Alexandre Dumas. As Monk is a fun teacher, he wants to enact a scene from the novel and hence, must choose 3 children from the class as the musketeers.
There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.

Input:
The first line consists of integer T. T testcases follow. The first line of each testcase consists of an integer N, denoting the number of children. It is followed by N lines, wherein each line is a string having only lowercase alphabets ('a'-'z') without spaces, denoting the names of children. A name can have a maximum length of 15 characters.

Output:
For each testcase, print the answer in a single line.


*/


#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

vector<string> generateSubsets(string s) {
    int sz = (1 << s.size());
    vector<string> ans;
    for (int mask = 0; mask < sz; mask++) {
        string subset;
        for (int i = 0; i < s.size(); i++) {
            if (mask & (1 << i)) {
                subset.push_back(s[i]);
            }
        }
        if (!subset.empty()) ans.push_back(subset);
    }
    return ans;
}

int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> str(n);

        // Input strings
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        unordered_map<string, int> hsh;

        // Process each string
        for (int i = 0; i < n; i++) {
            set<char> Dist_vowels;

            // Collect distinct vowels from the string
            for (char ch : str[i]) {
                if (isVowel(ch)) {
                    Dist_vowels.insert(ch);
                }
            }

            // Create a string of sorted distinct vowels
            string Vowel_str;
            for (char c : Dist_vowels) {
                Vowel_str.push_back(c);
            }

            // Generate all subsets of the vowel string
            auto all_subsets = generateSubsets(Vowel_str);

            // Count frequency of each subset
            for (auto vowel_subset : all_subsets) {
                hsh[vowel_subset]++;
            }
        }

        long long ans = 0;

        // Calculate combinations using inclusion-exclusion
        for (auto &pr : hsh) {
            if (pr.second < 3) continue; // Ignore subsets appearing in fewer than 3 strings

            int cnt = pr.second;
            // Calculate nC3 (ways to choose 3 strings containing this subset)
            long long ways = 1LL * cnt * (cnt - 1) * (cnt - 2) / 6;

            // Inclusion-exclusion principle
            if (pr.first.size() % 2 == 0) 
                ans -= ways;
            else 
                ans += ways;
        }

        // Output the result for this test case
        cout << ans << endl;
    }

    return 0;
}