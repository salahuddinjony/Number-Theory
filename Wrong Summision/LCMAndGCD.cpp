#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];



int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a,int b) {
    int c=a,d=b;
  /*   while (b)
    {
        int temp=b;
        b=a%b;
        a=temp;
    } */
 
    return (c*d)/ gcd( a, b);
}

int main() {
    optimize(); 
    
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin >>a>>b;
        cout<<lcm(a,b);
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/