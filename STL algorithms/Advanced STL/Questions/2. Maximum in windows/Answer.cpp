#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
 
signed main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n),b;
        for (int i = 0; i <n;i++) {
            cin>>v[i];
        }
        for (int i =0; i < n-k+1;i++) {
            int x;
            x=*(max_element(v.begin()+i,v.begin()+i+k));
            b.push_back(x);
        }
        for (int i = 0; i <b.size();i++) {
            cout<<b[i]<<" ";
        } cout<<endl;
    }
    return 0;
} 
