#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
/*

A prime factor of a number is a factor that is a prime number.
Prime factors are the building blocks of all integers, 
as every positive integer greater than 1 can be uniquely 
represented as a product of prime factors.
This is known as the fundamental theorem of arithmetic.

*/
void primefact(int n) {
    
    int number=n;
    for (int i =2; i * i<=n; i++)
    {
        if(n%i==0){
            int count=0;
            while (n%i==0)
            {
               n/=i;
               count++;
            }
          cout<<i<<"^"<<count<<endl;
        }
    }
   if(n>1) cout<<n<<"^"<<1<<endl;
    
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