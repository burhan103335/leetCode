class Solution {
    int mx = 0;
    void treeTravers(Node* root, int depth){
        mx = max(mx, depth);
        int n = root->children.size();
        
        for(int i = 0; i<n; i++) {
            treeTravers(root->children[i], depth+1);
        }
    }
    
public:
    int maxDepth(Node* root) {
        if(root == nullptr) return 0;
        treeTravers(root, 0);
        return mx+1;
    }
};