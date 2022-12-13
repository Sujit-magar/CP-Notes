#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back 


int main()
{
    int a[10]={1,2,3,4,5,6,3000,8,9,10}; 
    reverse (a,a+10);
    //for reversed array
    for(auto i:a){
    cout<<i<<" ";
    }
    cout<<endl;
    //for non increasing array 
    sort(a,a+10); 
    reverse (a,a+10); 
    for(auto i:a){
    cout<<i<<" ";
    }
    return 0;
}
