#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mx = 200;
long long a[mx];
const int N = 1e3+7;
vector<bool> prime(N, 1);
vector<int> ans;
vector<int> lp(N,0),hp(N,0);

void sievePrime() {
    for (int i = 2; i < N; i++) {
        if (prime[i]) {
            lp[i]=hp[i]=i;
            for (int j = 2 * i; j < N; j += i) {
                prime[j] = false;
                hp[j]=i;
                if(lp[j]==0) lp[j]=i;
            }
        }
    }
    //find prime fractor O(N)
    /* for (int i = 2; i < N; i++) {
       cout<<"For number:"<<i<<" {lp="<<lp[i]<<", hp="<<hp[i]<<"}"<<endl;
    } */


    int num;
    cin>>num;
    unordered_map<int,int>Prime_fractors;
    while (num>1)
    {
        int Prime_fractor=hp[num];
        while (num % Prime_fractor == 0)
        {
           num/=Prime_fractor;
           Prime_fractors[Prime_fractor]++;
        }
    }

    for (auto x : Prime_fractors)
    {
        cout<<x.first<<"^"<<x.second<<endl;
    }
    
    
}

int main() {
    optimize();
    sievePrime(); // Ensure this function is called to generate primes
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/