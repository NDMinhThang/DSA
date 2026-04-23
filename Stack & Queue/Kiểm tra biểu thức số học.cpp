#include <bits/stdc++.h>
using namespace std;

   void solve(){
        string s;
        getline(cin, s);
        stack<char> st;
        bool check;
        for(int i = 0; i<s.size(); i++){
            
            if(s[i] == ')'){

            check = true;
            while(!st.empty() && st.top() != '('){
                if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                    check = false;
                }
                st.pop();
            }

            if(!st.empty()) st.pop();

            if(check) break;

            }
            else st.push(s[i]);

            } 

            if(check) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }   


    int main(){
        int t; cin>>t;
        cin.ignore();
        while(t--){
            solve();
        }
        
    }
