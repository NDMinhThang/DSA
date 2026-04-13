#include <bits/stdc++.h>
using namespace std;


   int n, m, s;
   vector<int> adj[1001];
   bool visited[1001];

   void inp() {
    cin>>n>>m>>s;
    for(int i = 0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

        memset(visited, false, sizeof(visited)); 
   }


   void dfs(int u){

    cout<< u << " ";
    // danh dau la u da duoc tham 
    visited[u] = true;
    for(int v : adj[u]){
        // neu dinh v chua duoc tham
        if(!visited[v]){
            dfs(v);
        }
    }

   }

   int main(){
        inp();
        dfs(s);
   }

