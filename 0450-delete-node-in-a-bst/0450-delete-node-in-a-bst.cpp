/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int min_value(TreeNode* root){
        if(root==NULL){
            return -1;
        }
        TreeNode* temp=root;
        while(temp->left !=NULL){
            temp=temp->left;
        }
        return temp->val;
        
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root==NULL){
           return root;
       }
        if(root->val==key){
            if(root->right==NULL && root->left==NULL){
                delete root;
                return NULL;
            }
            if(root->right==NULL && root->left!=NULL){
                TreeNode* temp = root->left;
            delete root;
            return temp;
            }
            if(root->right!=NULL && root->left==NULL){
                 TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if(root->right!=NULL && root->left!=NULL){
               int mini=min_value(root->right);
                root->val=mini;
                root->right=deleteNode( root->right,mini);
                return root;
            }
        }
        else if(key > root->val) {
        root->right = deleteNode(root->right, key);
        return root;
    }
        
        root->left = deleteNode(root->left, key);
        return root;
    
        
    }
};