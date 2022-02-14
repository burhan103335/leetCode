/*simple recurtion */

class Solution {
    int treeTravers(TreeNode* root, int depth){
        if(root == nullptr) return depth;
        return max(treeTravers(root->left, depth+1), treeTravers(root->right, depth+1));
    }
    
    
public:
    int maxDepth(TreeNode* root) {
        return treeTravers(root, 0);
    }
};