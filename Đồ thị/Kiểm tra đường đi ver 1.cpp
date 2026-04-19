#include <bits/stdc++.h>
using namespace std;


   int n, m;
   int cnt = 0;
   vector<int> adj[1001];
   bool visited[1001];
   int tplt[1001];

   void inp() {

    cin>>n>>m;
    for(int i = 0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    for(int i = 1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
   }

   void dfs(int u){

    visited[u] = true;
    tplt[u] = cnt;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }

   }
   
    int main(){

            inp();
            int Q; cin>>Q;
      
            for(int i = 1; i<=n; i++){
                	if(!visited[i]){
                		++cnt;
                		dfs(i);
                	}
                }

            while(Q--){
                int s, t;
                cin>>s>>t;         
                
                if(tplt[s] == tplt[t]) cout<<"1"<<endl;
                else cout<<"-1"<<endl;


            }
        }

