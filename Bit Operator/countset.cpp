#include<iostream>
using namespace std;
int countset(int n){ 
   int res=0; 
   while(n!=0){ 
   if(n&1==1){ 
    res++; 
    } 
    n=n>>1;  
   } return res; 
} 
int countsetNaive(int n){ 
   int res=0; 
   while(n!=0){ 
   res++;
   n=n&(n-1); 
   } 
   return res; 
} 
int main(){
    int n; 
    cin>>n; 
    cout<<countsetNaive(n);
    return 0;
}
