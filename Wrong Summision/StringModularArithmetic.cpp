#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int Fname(int n) {
    int ans;
    return ans;
}

int main() {
    optimize();
    //If we have to need modular a big int then we can use string
    string n; //1000000000000000000000000000000000000000000000000000000000000000000000000000000000
    cin>>n;
    int ans=1,m=2;
    for (int i = 0; i <n.size(); i++)
    {
        ans=ans*10+n[i]-'0';
        ans=ans%m;
        
    }
    if(ans%m==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/