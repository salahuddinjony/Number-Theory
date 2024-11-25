#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];


void printBinary(int num){
    int count=0;
    for (int i = 9; i >=0; --i)
    {
        cout<<((num>>i) & 1);//right shift
       // count+=((num>>i) & 1);//if we count the bits then use this
    }
    cout<<endl;
    //cout<<count<<endl;
    
}


int main() {
    optimize();
    int a,pos;
    cout<<"Enter the number and position of bit: ";
    cin>>a>>pos;
    printBinary(a);
    //Get bits
     cout<<"Get the bit"<<endl;
    if((a & (1<<pos))!=0) cout<<"SET"<<endl; 
    else cout<<"UNSET"<<endl;

    //Set bits
    cout<<"Set the bit"<<endl;
    cout<<(a | (1<<pos))<<endl; 
    printBinary(a | (1<<pos));

    //Unset bits
     cout<<"Unset the bit"<<endl;
      cout<<(a & ~(1<<pos))<<endl; 
      printBinary(a & ~(1<<pos));

    //Toggle bits
    cout<<"Toggle the bit"<<endl;
    cout<<(a ^ (1<<pos))<<endl;//xor 
    printBinary(a ^ (1<<pos));

    //Count the bits(set bits count)
    int cnt=0;
    for (int i =31; i >=0; --i)
    {
        if((a & (1<<i))!=0) cnt++;
    }
  
    cout<<"Total set bits : "<<cnt<<endl;
    printBinary(a);
    
    //or count set bits
    cout<<"Builtin popcount: "<<__builtin_popcount(a)<<endl;
    cout<<"Builtin popcount: "<<__builtin_popcountll(1LL<<35)<<endl;


    //Check is it power of 2

    if((a & (a-1))==0) cout<<"This is power of 2"<<endl;
    else cout<<"This is not power of 2"<<endl;

    return 0;
}


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/