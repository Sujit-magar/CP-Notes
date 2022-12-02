#include<iostream>
using namespace std;
int countsetNaive(int a){ 
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
