#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
//iterative method
int binaryExp(int m,int n) {  //TC=log(n)
    int res=1;
    int base=m;
    while (n)
    {
       if(n & 1){ //if even we write also (n%2==0)
        res*=base;
        n-=1;
       }
       else{
        base*=base;
        n/=2;
       }
    }
    return res;
    
}

int main() {
    optimize();
    int t;
    cin>>t;
    while (t--)
    {
        int base;
        int power;
        cin >> base;
        cin >> power;
        cout<<binaryExp(base,power)<<endl;
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/