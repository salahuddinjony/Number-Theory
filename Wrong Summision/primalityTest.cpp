#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int prime(int n) {
    if(n<2) return false;
    if(n<=3) return true;    
    if(n%2==0) return false;   
    for (int i =3; i * i<=n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
     

}

int main() {
    optimize();
    
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin >> n;
    if(prime(n)) cout<<"yes"<<endl;
    else  cout<<"no"<<endl;
   }
   
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/