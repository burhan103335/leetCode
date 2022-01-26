
bool temp = 0;
vector<int> v, v1, result;
void travers(TreeNode* root)
{
    if(root==NULL) return;
    travers(root->left);
    
    if(temp) v1.push_back(root->val);

    else v.push_back(root->val);
    
    travers(root->right);
}


class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        v.clear(), v1.clear(), result.clear(), temp = 0;
        travers(root1);
        temp = 1;
        travers(root2);
        int n = v.size(), n1 = v1.size(), i = 0, j = 0;
        
        while(i<n &&j<n1)
        {
            if(v[i]<v1[j]) result.push_back(v[i++]);
            else result.push_back(v1[j++]);
        }
        while(i<n) result.push_back(v[i++]);
        while(j<n1) result.push_back(v1[j++]);
        
        return result;
        
    }
};