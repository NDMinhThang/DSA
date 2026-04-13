#include <bits/stdc++.h>
using namespace std;

    vector<pair<int, int>> edge;
    int a[1001][1001];

    int main(){
        int n; cin>>n;
        cin.ignore();

        for(int i = 1; i<=n; i++){
            string s; int v;
            getline(cin,s);
            stringstream ss(s);

            while(ss >> v){
                a[i][v] = 1;             
            }

        }
        
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }

    }
