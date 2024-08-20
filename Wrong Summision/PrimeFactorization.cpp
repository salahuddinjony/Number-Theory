#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

void primefact(int n) {
    int count=0;
    int number=n;
    for (int i =2; i * i<=n; i++)
    {
        if(n%i==0){
            while (n%i==0)
            {
               
               n/=i;
            }
           count++;
        }
    }
   if(n>1) count++;
    cout<<number<<":"<<count<<endl;
    // if(n>1)  cout<<n<<"^"<<1<<endl;
    
}

int main() {
    optimize();
    int n;
    while (cin>>n)
    {
      if(n==0) break;
      primefact(n);
    
    }
    
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/