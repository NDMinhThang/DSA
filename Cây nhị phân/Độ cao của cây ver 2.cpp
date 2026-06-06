#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int x) {
        data = x;
        left = right = NULL;
    }
};

node* insertNode(vector<int> &arr, int i, int n) {
    if (i >= n || arr[i] == -1) return NULL;

    node* root = new node(arr[i]);
    root->left = insertNode(arr, 2 * i + 1, n);
    root->right = insertNode(arr, 2 * i + 2, n);
    return root;
}

int height = 0;

void dfs(node *root, int h) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        height = max(height, h);
        return;
    }
    dfs(root->left, h + 1);
    dfs(root->right, h + 1);
}

int main() {
    int t; cin>>t;
    while(t--){
    
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    node *root = insertNode(arr, 0, n);

    dfs(root, 0);
    cout << height << endl;

    }

}
