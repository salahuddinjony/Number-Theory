/*
------------Brute Process--------

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int gcd(int a,int b) {
   if(b==0) return a;
   return gcd(b,a%b);
}

int main() {
    optimize();
    
   int n;
   cin>>n;
   int cnt=0;
   for (int i = 1; i <=n; i++)
   {
    if(gcd(i,n)==1){
        cout<<i<<" "<<n<<endl;
        cnt++;
    }
   }
   cout<<"Total Coprime is: "<<cnt<<endl;
   
    return 0;
}


*/
//Eular Totient Functions is: n*(1-1/p1)*(1-1/p2)*(1-1/pk) where p is prime factor

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int primeFactor(int n) {
    int coPrime = n;
    for (int i = 2; i * i <= n; i++) {  // Iterate only up to the square root of n
        if (n % i == 0) {  // If i is a prime factor
            while (n % i == 0) {
                n /= i;  // Remove all factors of i from n
            }
            coPrime *= (1 - 1.0 / i);  // Apply the Euler's Totient formula
        }
    }
    if (n > 1) {  // If there is any prime factor greater than sqrt(n)
        coPrime *= (1 - 1.0 / n);
    }
    return (int) coPrime;  // Return the integer value
}

int main() {
    optimize();
    
    int n;
    cin >> n;
    cout << "Total Coprime is: " << primeFactor(n) << endl;
   
    return 0;
}