
// Time complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
int f[1001];
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int fibo(int a){
    if(f[a]!=0) return f[a]; //store the previous got value for dont need to iterative for same value
    if(a<=2) return 1; //base case
    int ans=fibo(a-1)+fibo(a-2); //resursive case
    f[a]=ans; //sotre the got value of fibonacci
    return ans;
}
int main(){
    optimize();
    int n;
    scanf("%d",&n);
    for (int i =1; i <=n; i++)
    {
        cout<<fibo(i)<<" ";
    }

    return 0;
}




/*
// Time complexity: O(2^n)

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int fibo(int a){
    if(a<=2) return 1;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    optimize();
    int n;
    scanf("%d",&n);
    for (int i =1; i <=n; i++)
    {
        cout<<fibo(i)<<" ";
    }
    


    return 0;
}

*/

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/