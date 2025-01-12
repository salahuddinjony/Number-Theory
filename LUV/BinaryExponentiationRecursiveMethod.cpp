#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
const int M=1e6;
long long a[mx];


// Recursive method                 Time Complexity:  O(\log b) 

int BinaryExp(int a, int b){

    if(b==0) return 1;
     int res = BinaryExp(a, b / 2);
    if(b&1){ //check its odd or even
        return (a*(res *1LL*res %M) %M);//for odd power
    }
    else{
        return (res *1LL* res %M); //for even power
    }
}
int main(){
    optimize();
    cout<<BinaryExp(2,3)<<endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int BinaryExp(int a, int b) {
    if (b == 0) return 1;  // Base case: a^0 = 1
    int res = BinaryExp(a, b / 2);  // Recursive call

    if (b & 1) {  // If b is odd, multiply by a
        res= a*res *res;
    }else{
    res = res*res;  // Square the result
    }

    return res;
}

int main() {
    optimize();
    cout << BinaryExp(2, 6) << endl;  // Output: 64
    return 0;
}

*/

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/