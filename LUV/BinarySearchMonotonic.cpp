#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
long long a[mx];
int main(){
    optimize();
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    int lo=0, hi=n-1;
    int find;
    cin>>find;
    while (hi- lo> 1)
    {
        int mid=(hi+lo)/2;
        if(v[mid]>find){
            hi=mid-1;
        }else{
            lo=mid;
        }
    }
    if(find==v[hi]){
        cout<<hi<<endl;
    }
    else if (find==v[lo])
    {
         cout<<lo<<endl;
    }else{
        cout<<"Not found!"<<endl;
    }

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
long long a[mx];
int main(){
    optimize();
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    int lo=0, hi=n-1;
    int find;
    cin>>find;
    while (lo<=hi)
    {
        int mid=(hi+lo)/2;
        if(v[mid]==find){
             cout<<mid<<endl;
             return 0;
        }
        else if(v[mid]>find){
            hi=mid-1;
        }else if(v[mid]<find){
            lo=mid+1;
          
        }
    }
    cout<<"Not found!"<<endl;
    
    return 0;
}

*/


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/