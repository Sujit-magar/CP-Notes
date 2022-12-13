#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back 


int main()
{
    char s[]="aaaabbbbccbbbddz"; 
    //to get non repeating elements 
    int newlen=unique(s,s+strlen(s))-s; 
    s[newlen]=0; 
    cout<<s<<endl;
    //for distinct elements
    sort(s,s+newlen); 
    int n=unique (s,s+newlen)-s; 
    s[n]=0; 
    cout<<s; 
    return 0;
}
