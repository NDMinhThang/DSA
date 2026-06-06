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

    node* inserNode(node *root, int x){
        if(root == NULL) return new node(x);

        if(x < root->data){
            root->left = inserNode(root->left, x);
        } else {
            root->right = inserNode(root->right, x);

        }
        return root;
    }

    int nodeMax(node *root){
        
        while(root->right!=NULL){
            root = root->right;
        }
        return root->data;
    }

    int nodeMin(node *root){
        
        while(root->left!=NULL){
            root = root->left;
        }
        return root->data;
    }

    int main(){
        int n; cin>>n;
        node *root = NULL;

        for(int i = 0; i<n; i++){
            int x; cin>>x;
            root = inserNode(root, x);
        }
      
        cout<<nodeMax(root)<<" "<<nodeMin(root);
    }
