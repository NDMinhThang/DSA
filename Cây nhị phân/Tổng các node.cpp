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

    int sumAllNodes(node* root) {
 
        if (root == NULL) return 0;

        return root->data + sumAllNodes(root->left) + sumAllNodes(root->right);
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

        cout<<sumAllNodes(root)<<endl;
        
    }
