#include<bits/stdc++.h>
using namespace std;
int a[1001], n;
	int main(){
        int t; cin>>t;
        while(t--){
       		cin>>n;
            for(int i = 1; i<=n; i++){
                a[i] = i;
            }
            do{
                for(int i = 1; i<=n; i++){
                    cout<<a[i];
                }
                cout<<" ";
            }
            while(next_permutation(a+1, a+n+1));
            cout<<endl;
        }       
       
    }
