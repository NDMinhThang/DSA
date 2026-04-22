#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), res(n);
        for(int &x : a) cin >> x;

        stack<int> st;

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= a[i]){
                st.pop();
            }

            if(st.empty()) res[i] = -1;
            else res[i] = st.top();

            st.push(a[i]);
        }

        for(int x : res) cout << x << " ";
        cout << endl;
    }
}
