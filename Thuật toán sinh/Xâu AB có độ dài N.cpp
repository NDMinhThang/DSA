#include<bits/stdc++.h>
using namespace std;

int n, ok;
string s;


    void kt(){
        s = string(n, 'A');
    }

    void sinh(){
        int i = s.size() - 1;
        while(i>=0 && s[i]=='B'){
            s[i]='A';
            i--;
        }

        if(i<0) ok = 0;
        else s[i] = 'B';

    }


    int main(){
        int t; cin>>t;
        while(t--){
            cin>>n;
            ok = 1;
            kt();

            vector<string> v;

            while(ok){
            v.push_back(s);
            sinh();
            }
           
            for(auto x : v){
                cout<< x << " ";
            }
            cout<<endl;
        }
    }
