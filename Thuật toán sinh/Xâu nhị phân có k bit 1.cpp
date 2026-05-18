#include <bits/stdc++.h>
using namespace std;


    int n,k, x[100], ok;
    void ktao(){
        for(int i = 1; i<=n; i++){
            x[i] = 0;
        }
    }

    void sinh(){
        int i = n;

        while(i>=1 && x[i]==1){
            x[i] = 0;
            --i;
        }
        if(i==0) ok = 0;
        else x[i] = 1;

    }

    bool check(){
        int cnt = 0;
        for(int i = 1;i<=n; i++){
            cnt+=x[i];
        }

        return cnt == k;
    }

    int main(){

        int t;
        cin>>t;
        while(t--){
            cin>>n>>k;
            ok = 1;
            ktao();
            while(ok){
            if(check()){
            for(int i = 1; i <= n; i++){
                cout << x[i];
            }
                cout << endl;
            }
            sinh();

            }
        }
       
    }
