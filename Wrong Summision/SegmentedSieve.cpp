#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
bool prime[900000001];
vector<int>ans;
void sieve() {
    for (int i = 2; i * i <= N; i++) {
        if (prime[i]==false) {
            for (int j = i * i; j <=N; j += i) {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <=N; i++) {
        if (prime[i]==false) ans.push_back(i);
    }
}

void SegmentSieve(int l,int r) {
    if(l==1) l++;
    int len=r-l+1;
    int arr[len+1];
    for (int i = 0; i <len; i++) arr[i]=0;
    
    for(int p: ans){
        if(p*p<=r){
            int i=(l/p)*p;
            if(i<l) i+=p;
            for (; i <=r; i+=p)
            {
                if(i!=p){
                    arr[i-l]=1;
                }
                
            }
            
        }
    }
    for (int i = 0; i <len; i++)
    {
       if(arr[i]==0) cout<<l+i<<" ";
    }
    cout<<endl;
    

    
}

int main() {
    optimize();
    sieve();
    
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        SegmentSieve(l,r);
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/