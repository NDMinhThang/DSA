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

    bool dfs(int u, int par){
        visited[u] = true;
        for(int v : adj[u]){
            if(!visited[v]){
                if(dfs(v,u)) return true;
            }
            else if(v != par){
                return true;
            }
        }
        return false;
    }

    int main(){
        inp();
        for(int i = 1; i<n; i++){    // kiem tra het cac dinh khi co nhieu tplt
            if(!visited[i]){
                if(dfs(i,0)){
                    cout<<"1"<<endl;
                    return 0;
                }
            }
        }
        
        cout<<"0"<<endl;
    }
