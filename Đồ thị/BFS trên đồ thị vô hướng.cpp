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

    for(int i = 1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

        memset(visited, false, sizeof(visited));
 
   }


   void bfs(int u){
        queue<int> q;
        q.push(u);
        visited[u] = true;

        while(!q.empty()){
            int v = q.front(); // lay dinh o dau hang doi
            q.pop(); // xoa phan tu dau hang doi

            cout<< v << ' ';
            for(int x : adj[v]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
   }

   int main(){
        inp();
        bfs(s);
   }

