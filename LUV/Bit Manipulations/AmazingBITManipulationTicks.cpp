#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 2000000;
int a[N];

// Print a number with binary
void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{
    optimize();

    int n=12;
   

    // Print a number with binary
    printBinary(n);

    // Check a number is it Even or odd
    if ((n & 1) == 0)
        cout << n << " is even!" << endl;
    else
        cout << n << " is not even!" << endl;

    // Multiply or Divide by 2

    cout << (n >> 1) << endl; // Divide by 2(Right shift)
    cout << (n << 1) << endl; // multiply by 2  (Left shift)

    // Capital to small letter
    for (char i = 'A'; i <= 'E'; i++)
    {
        cout << i << " is converted to "<<char(i | 1<<5)<<endl; //here is leftshift 5 cause the bits need to set if want to go uppercae 
        cout << i << " is converted to "<<char(i | ' ')<<endl; //here is leftshift with space(' ')[for space ascii is 32] cause the bits need to set if want to go uppercae 
        printBinary((int)i);
      
    }
    // Small letter to Capital 
    for (char i = 'a'; i <= 'e'; i++)
    {
        cout << i << " is converted to "<<char(i & ~(1<<5))<<endl;
        cout << i << " is converted to "<<char(i & '_')<<endl;//here underscore ascii value is 00001011111
        printBinary((int)i);
      
    }


    //Clear LSB bit to specipic position's bit
    int a=7;
    for (int i = 0; i <3; i++)
    {
        a=(a & ~(1<<i)); // 111->110->100->000
        cout<<a<<endl;
        printBinary(a);
    }
    //Or another way to Clear LSB bit to specipic position's bit
    int k=2;
    int s=9;
    cout<<s<<"'s number clear LSB bit to specipic position's of "<<k<<" bit"<<endl;
    printBinary(s);
    int c=(s &( ~((1<<(k+1))-1))) ; //k=2 -> 1<<k->1000-1->111 -> 000 -> 1001 & 000==1000
    cout<<"After Clear bits: "<<c<<endl;
    printBinary(c);

     //Clear MSB bit to specipic position's bit
     int z=2;
      printBinary(s);
        cout<<s<<"'s number clear MSB bit to specipic position's of "<<z<<" bit"<<endl;
        cout<<(s&((1<<(z+1))-1))<<endl;
        printBinary(s&((1<<(z+1))-1));//k=2 -> 1<<k->1000-1->111 -> 1001 & 0111==0001

    

    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/