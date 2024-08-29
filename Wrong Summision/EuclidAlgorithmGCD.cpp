#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

//Using recursion function
int GCD(int a,int b){ //a=12 b=6
    if(b==0) return a;
    return gcd(b,a%b); //a=6 b=0

}
//Using function
int gcd(int a,int b) {
    while (b)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
    
}

int main() {
    optimize(); 
    
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin >>a>>b;
        cout<<GCD(a,b);
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/