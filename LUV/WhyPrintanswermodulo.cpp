#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int main() {
    optimize();

    /*
    Why Print answer modulo 10^9+7 
    when we modulo a number and then we always get the result
    less than the given modulo. 
    */
    int n;
    int mod=47;
    cin>>n;
    int ans=1;
    //Example of finding factorial of a given number
    for (int i = 2; i <=n; i++)
    {
       ans=(ans*i)%mod;
    }
    cout<<ans<<endl;
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/