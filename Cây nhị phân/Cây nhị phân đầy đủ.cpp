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

    // Hàm chèn node con vào đúng vị trí của node cha trên cây
    void insertNode(node* root, int u, int v, char c) {
        if (root == NULL) return;
        
        if (root->data == u) {
            if (c == 'L') root->left = new node(v);
            else root->right = new node(v);
        } else {
            insertNode(root->left, u, v, c);
            insertNode(root->right, u, v, c);
        }
    }

bool check(node* root) {
    if (root == NULL) return true;

    if (root->left == NULL && root->right == NULL) return true;

    if (root->left != NULL && root->right != NULL) {
        return check(root->left) && check(root->right);
    }
    return false;
}

    int main(){
        int n; cin>>n;
        node *root = NULL;
        while(n--){
        int u, v; char c;
        cin>>u>>v>>c;
        
        if(root == NULL){
            root = new node(u);
            insertNode(root, u, v, c);
        }
        else{
            insertNode(root, u, v, c);
        }
        }
        if(check(root)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
    }
