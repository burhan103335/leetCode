class Solution {
    int treeTravers(TreeNode* root, int depth){
        if(root == nullptr) return 1000000000;
        if(root->left == nullptr && root->right == nullptr) return depth+1;
        return min(treeTravers(root->left, depth+1), treeTravers(root->right, depth+1));
    }
    
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        return treeTravers(root, 0);
    }
};