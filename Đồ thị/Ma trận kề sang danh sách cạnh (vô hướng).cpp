#include <bits/stdc++.h>
using namespace std;

// từ ma trận kề chuyển sang danh sách cạnh
int a[1001][1001];
vector<pair<int,int>> edge;

int main() {
    int n;
    cin >> n;

    // nhập ma trận kề
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    // chuyển sang danh sách cạnh
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                edge.push_back({i, j});
            }
        }
    }

    // in danh sách cạnh
    for(auto it : edge){
        cout << it.first << " " << it.second << endl;
    }
}
