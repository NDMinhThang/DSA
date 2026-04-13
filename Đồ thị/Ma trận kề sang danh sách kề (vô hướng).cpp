#include <bits/stdc++.h>
using namespace std;

// từ ma trận kề chuyển sang danh sách kề
int a[1001][1001];
vector<int> adj[1001];

int main() {
    int n;
    cin >> n;

    // nhập ma trận kề
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    // chuyển sang danh sách kề
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                adj[i].push_back(j);
            }
        }
    }

    // in danh sách kề
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }

}
