#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
long long a[mx];
const int N=100;
vector<int>Divisors[N];
int sum[N];

void CalculatorDivisor(){
    for (int i = 1; i <N; i++)
    {
        for (int j = i; j <N; j+=i)
        {
            Divisors[j].push_back(i);
            sum[j]+=i;
        }
  
    }

   for (int i = 1; i < 10; i++)
   {
     for(auto x: Divisors[i]){
        cout<<x<<" ";
    }
    cout<<"\nSum of divisor of "<<i<<" is ="<<sum[i]<<endl;
    cout<<endl;
   }
   
    
    
}

int main(){
    CalculatorDivisor();
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/