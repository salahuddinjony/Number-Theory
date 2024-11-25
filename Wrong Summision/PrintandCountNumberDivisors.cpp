#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
set<int>s;
void DivisorCnt(int n) {

    for (int i =1; i*i <=n; i++)
    {
        if(n%i==0){
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }
    
}

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        DivisorCnt(n);
        cout<<"Total Divisor is: "<<s.size()<<endl;
        for(int u : s) cout<<u<<" ";
         s.clear();
        cout<<endl;
      
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/