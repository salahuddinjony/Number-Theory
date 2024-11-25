#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
long long a[mx];
const int M=1e6;


/*
This reduces the number of multiplications from  b  to  \log_2(b) ,making it much 
faster for large exponents.
*/

//BinaryIterative method
int BinaryExp(int a, int b){
    int ans=1;
    while (b)
    {
        if(b&1){  //if(b&1): Checks if the current bit of b (in binary) is 1:If true multiply ans by a (because this bit contributes to the result).
        ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;  // Square a for the next higher power.
        b>>=1;          //Right-shift b by 1 (equivalent to dividing b by 2)
    }
    return ans;
    
}
int main(){
    optimize();
    int a,b;
    cin>>a>>b;
    cout<<BinaryExp(a,b)<<endl;
}


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/