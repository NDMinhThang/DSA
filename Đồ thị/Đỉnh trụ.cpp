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
        for(int v : adj[u]){
            if(!visited[v]){
                dfs(v);
            }
        }

    }

    int tplt(){
        int cnt = 0;
        for(int i = 1; i<= n; i++){
            if(!visited[i]){
                ++cnt;
                dfs(i);
            }
        }
        return cnt;
    }

    int dinh_tru(){
        int ans = tplt();
        int sum = 0;
        for(int i = 1; i<=n; i++){
            memset(visited, false, sizeof(visited));
            visited[i] = true; // loai bo i khoi do thi

            if(ans < tplt()){
            sum++;

            }
        }
        
        return sum;
    }

    int main(){
        inp();
        cout<<dinh_tru()<<endl;
    }
