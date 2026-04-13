#include <bits/stdc++.h>
using namespace std;

    
    int n, m;
    vector<int> adj[1001];
    bool visited[1001];

    void inp(){
        cin>>n>>m;

        for(int i = 0; i<m; i++){
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }

    void dfs(int u){
        visited[u] = true;
        for(int x : adj[u]){
            if(!visited[x]){
                dfs(x);
            }
        }

    }

    void lienthong(){
        int cnt = 0;
        for(int i = 1; i<=n; i++){
            if(!visited[i]){
                ++cnt;
                dfs(i);
            }
        }
        cout<<cnt;
    }

    int main(){
        inp();
        lienthong();
    }

