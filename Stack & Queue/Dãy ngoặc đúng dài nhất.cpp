#include <bits/stdc++.h>
using namespace std;


   void solve(){
        string s; cin>>s;
        

        stack<int> st;
        st.push(-1); // mốc ban đầu = -1
        int maxx = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{

                st.pop();
                if(!st.empty()) maxx = max(maxx, i - st.top()); // độ dài bằng kết thúc trừ index trước bắt đầu
                else st.push(i);

            } 

        }
        cout<<maxx<<endl;
    }

    int main(){
        int t; cin>>t;
        while(t--){
            solve();
        }
        
    }
