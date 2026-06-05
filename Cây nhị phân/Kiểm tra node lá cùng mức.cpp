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

    void insertNode(node* root, int u, int v, char c){

        if(root == NULL) return;
        if(root->data == u){
            if(c == 'L') root->left = new node(v);
            else root->right = new node(v);
        } else {
            insertNode(root->left, u, v, c);
            insertNode(root->right, u, v, c);
        }
    }

    int h = 0;
    void dfs(node *root, int lv){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            h = max(h, lv);
            return;
        }

        dfs(root->left, lv+1);
        dfs(root->right, lv+1);
    }

    bool check(node *root, int lv, int h){
        if(root == NULL) return true;
        if(root->left == NULL && root->right == NULL)
            return (lv == h);
        return check(root->left, lv+1, h) && check(root->right, lv+1, h);

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
            else
                insertNode(root, u, v, c);
        }

        dfs(root, 0);
        if(check(root, 0, h)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
