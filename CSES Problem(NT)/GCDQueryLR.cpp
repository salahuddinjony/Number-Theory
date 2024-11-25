#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int gcd(int a,int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
    //inbuilt gcd functions:
    // __gcd(a,b);
}

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin >> n>>q;
        int a[n+3];
        int pre[n+3];
         pre[0]=0;
        int post[n+3];
        post[n+1]=0;
        for (int i =1; i <= n; i++) cin>>a[i];
        for (int i =1; i <=n; i++) pre[i]=gcd(pre[i-1],a[i]); //2 2 1
        for (int i =n; i >=1; i--) post[i]=gcd(post[i+1],a[i]);//1 3 9
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],post[r+1]);
            cout<<ans<<endl;
        }
        
        
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/