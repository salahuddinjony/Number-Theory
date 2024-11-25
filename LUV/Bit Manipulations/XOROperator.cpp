#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 2000000;
int a[N];

int main()
{
    optimize();
    //<----Swap operations---> [ x^x==0, 0^x==x ]

    int a = 4, b = 5;
    cout << "a= " << a << " b= " << b << endl;
    a = a ^ b; //  ^ --> xor operations
    b = b ^ a; //(b ^ (a ^ b )==b^b^a==a)
    a = a ^ b; // ((a^b)^a==a^a^b==b)
    cout << "a= " << a << " b= " << b << endl;

    /***
    * Given array a of •n• integers. •All• integers
    * are present in event count except one.
    * Find that one integer which has odd count
    * in O(N) time complexity and 0(1) space;

    *N < 10^ 5
    * a[il < 10^5
    **/

    int n, x;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans ^= x;
    }
    cout << ans;

    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/