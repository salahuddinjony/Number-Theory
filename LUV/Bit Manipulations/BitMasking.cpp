#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
void PrintBinary(int n){
    for (int i =10; i >=0; i--)
    {
        cout<<((n>>i) & 1);
    }
    cout<<endl;
    
}
int main() {
    optimize();
    
    int n;
    cin>>n;
    vector<int>masks(n,0);
    for (int i = 0; i <n; i++)
    {
        int num_days;
        cin>>num_days;
        int mask=0;
        for (int j = 0; j <num_days; j++)
        {
            int day;
            cin>>day;
            mask=(mask | (1<<day)); //set bit
        }
        masks[i]=(mask);
        
    }
    //Prints bits
    /* for (int i = 0; i <n; i++)
    {
        PrintBinary(masks[i]);
    } */
    int max_days=0;
    int person1=-1;
    int person2=-1;
    
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
           int intersections= masks[i] & masks[j]; 
           int common_days=__builtin_popcount(intersections);
           if(common_days > max_days){
            max_days= common_days;
            person1=i;
            person2=j;
           }

        }
        
    }
    cout<<person1<<" "<<person2<<" "<<max_days;
    


    
    return 0;
}
for (int i = 0; i < 0; i++)
{
    
}


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/