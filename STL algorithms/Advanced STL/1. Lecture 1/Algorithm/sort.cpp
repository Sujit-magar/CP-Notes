#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back 


int main()
{
    int a[10]={1,2,3,4,5,6,3000,8,9,10}; 
    sort(a, a+10);
    for(auto i:a){
    cout<<i<<" ";
    }
    return 0;
}
