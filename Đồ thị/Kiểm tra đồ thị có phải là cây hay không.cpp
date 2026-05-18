#include <bits/stdc++.h>
using namespace std;

    int n, m;
    vector<int> adj[1001];
    bool visited[1001];

    void inp(){
        cin>>n;
        m = n-1;
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

    int tplt(){
        int cnt = 0;
        for(int i = 1; i<= n; i++){
            if(!visited[i]){
                ++cnt;
                dfs(i,0);
            }
        }
        return cnt;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
        inp();
        bool check = dfs(1,0);
        memset(visited, false, sizeof(visited));
        
        if(!check && tplt() == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        memset(visited, false, sizeof(visited));
        }
    }
