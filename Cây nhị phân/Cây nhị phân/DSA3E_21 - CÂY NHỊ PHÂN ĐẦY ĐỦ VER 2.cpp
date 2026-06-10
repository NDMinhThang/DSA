#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int x){
        data = x;
        left = right = NULL;
    }
};

node *insertNode(vector<int> &a, int i, int n){
    if(i >= n || a[i] == -1) return NULL;

    node *root = new node(a[i]);

    root->left = insertNode(a, 2*i+1, n);
    root->right = insertNode(a, 2*i+2, n);

    return root;
}

bool check(node *root){
    if(root == NULL) return true;

    if(root->left == NULL && root->right == NULL)
        return true;

    if(root->left != NULL && root->right != NULL)
        return check(root->left) && check(root->right);

    return false;
}

// Kiểm tra mảng biểu diễn cây có hợp lệ không
bool validArray(vector<int> &a, int n){
    for(int i = 0; i < n; i++){

        if(a[i] == -1){

            int l = 2*i + 1;
            int r = 2*i + 2;

            if((l < n && a[l] != -1) ||
               (r < n && a[r] != -1))
                return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(!validArray(a, n)){
        cout << "NO";
        return 0;
    }

    node *root = insertNode(a, 0, n);

    cout << (check(root) ? "YES" : "NO");
}
