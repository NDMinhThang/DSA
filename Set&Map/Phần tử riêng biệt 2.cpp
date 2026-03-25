#include <bits/stdc++.h>
using namespace std;

    int main(){
        int n; cin>>n;
        vector<int> a(n);

        for(int &x : a) cin>>x;

        set<int> se;

        for(int i = 0; i<n; i++){
            if(!se.count(a[i])){
                cout<<a[i]<<' ';
                se.insert(a[i]);

            }
        }

        
    }
